/*
 * XREFs of _LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry@12 @ 0x4B330BDE
 * Callers:
 *     _LdrCreateEnclave@36 @ 0x4B32DC50 (_LdrCreateEnclave@36.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0x4B2ADDDA (__tlgKeywordOn@12.c)
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __tlgWriteTransfer_EtwEventWriteTransfer@24 @ 0x4B330F4C (__tlgWriteTransfer_EtwEventWriteTransfer@24.c)
 */

char __thiscall LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry(void *this, int a2, int a3)
{
  struct _PEB *v3; // eax
  int v5; // ecx
  void *v7; // [esp+Ch] [ebp-64h] BYREF
  _DWORD v8[2]; // [esp+10h] [ebp-60h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [esp+18h] [ebp-58h] BYREF
  const char *v10; // [esp+38h] [ebp-38h]
  int v11; // [esp+3Ch] [ebp-34h]
  int v12; // [esp+40h] [ebp-30h]
  int v13; // [esp+44h] [ebp-2Ch]
  _DWORD *v14; // [esp+48h] [ebp-28h]
  int v15; // [esp+4Ch] [ebp-24h]
  int v16; // [esp+50h] [ebp-20h]
  int v17; // [esp+54h] [ebp-1Ch]
  void **v18; // [esp+58h] [ebp-18h]
  int v19; // [esp+5Ch] [ebp-14h]
  int v20; // [esp+60h] [ebp-10h]
  int v21; // [esp+64h] [ebp-Ch]

  v3 = NtCurrentPeb();
  if ( v3->ProcessHeap )
  {
    LOBYTE(v3) = RtlRunOnceExecuteOnce(&VsmEnclaveTelemetryInitRunOnce, VsmEnclaveTelemetryInitOnce, 0, 0);
    if ( (unsigned int)dword_4B3A3368 > 4 )
    {
      LOBYTE(v3) = _tlgKeywordOn(&dword_4B3A3368, 0x400000000000LL);
      if ( (_BYTE)v3 )
      {
        v8[0] = a2;
        v8[1] = a3;
        v14 = v8;
        v18 = &v7;
        v10 = "LdrCreateEnclave";
        v11 = 0;
        v12 = 17;
        v13 = 0;
        v15 = 0;
        v16 = 8;
        v17 = 0;
        v7 = this;
        v19 = 0;
        v20 = 4;
        v21 = 0;
        LOBYTE(v3) = _tlgWriteTransfer_EtwEventWriteTransfer(v5, v5, 5u, &UserData);
      }
    }
  }
  return (char)v3;
}
