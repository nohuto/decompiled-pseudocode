/*
 * XREFs of ?LogStreamIdentifierExpired@CSpatialAudioResourceManagerTraceLogger@@QEAAXI_J@Z @ 0x18010AA98
 * Callers:
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x180107AE8 (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 *     ?HandleRevocationCompletion@CSpatialAudioResourceManager@Sarm@@AEAAX_J@Z @ 0x180107C04 (-HandleRevocationCompletion@CSpatialAudioResourceManager@Sarm@@AEAAX_J@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18010A1B4 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::LogStreamIdentifierExpired(
        CSpatialAudioResourceManagerTraceLogger *this,
        int a2,
        __int64 a3)
{
  int v3; // [rsp+30h] [rbp-68h] BYREF
  __int64 v4; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_18019D350 > 4 )
  {
    v4 = a3;
    v9 = &v4;
    v11 = 0;
    v10 = 8;
    v6 = &v3;
    v8 = 0;
    v3 = a2;
    v7 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_18019D350,
      (unsigned __int8 *)dword_18016A1F8,
      0LL,
      0LL,
      4u,
      &v5);
  }
}
