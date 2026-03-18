/*
 * XREFs of _TraceChildWindowDpiTelemetry@12 @ 0x1519C8
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     _xxxForceUpdateProcessDpiAwarenessContext@8 @ 0x1523FE (_xxxForceUpdateProcessDpiAwarenessContext@8.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z @ 0x142F12 (--$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z.c)
 *     _GetProcessImageFilename@8 @ 0x15121A (_GetProcessImageFilename@8.c)
 */

char __fastcall TraceChildWindowDpiTelemetry(int a1, int a2, PVOID *a3)
{
  int v3; // eax
  char *v4; // esi
  PVOID *v5; // ecx
  int v6; // edi
  int ProcessImageFilename; // ebx
  int v8; // eax
  PVOID *v9; // ecx
  wchar_t *v11; // [esp+10h] [ebp-68h] BYREF
  PVOID *v12; // [esp+14h] [ebp-64h] BYREF
  wchar_t *v13; // [esp+18h] [ebp-60h] BYREF
  int v14; // [esp+1Ch] [ebp-5Ch]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+20h] [ebp-58h] BYREF
  PVOID **v16; // [esp+40h] [ebp-38h]
  int v17; // [esp+44h] [ebp-34h]
  int v18; // [esp+48h] [ebp-30h]
  int v19; // [esp+4Ch] [ebp-2Ch]
  char *v20; // [esp+50h] [ebp-28h] BYREF
  char *v21; // [esp+60h] [ebp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v14 = a2;
  v4 = byte_FC318;
  v5 = *(PVOID **)(v3 + 232);
  v11 = (wchar_t *)byte_FC318;
  v6 = 0;
  v13 = (wchar_t *)byte_FC318;
  v12 = v5;
  ProcessImageFilename = GetProcessImageFilename(v5, &v11);
  LOBYTE(v8) = v14;
  if ( v14 )
  {
    v8 = *(_DWORD *)(v14 + 8);
    v9 = *(PVOID **)(v8 + 232);
    if ( v12 == v9 )
    {
      v4 = (char *)v11;
    }
    else
    {
      v8 = GetProcessImageFilename(v9, &v13);
      v4 = (char *)v13;
      v6 = v8;
    }
  }
  if ( (unsigned int)dword_266280 > 5 )
  {
    LOBYTE(v8) = _tlgKeywordOn(&dword_266280, 0x400000000000LL);
    if ( (_BYTE)v8 )
    {
      v12 = a3;
      _tlgCreate1Sz<unsigned short>(&v21, v4);
      _tlgCreate1Sz<unsigned short>(&v20, (char *)v11);
      v18 = 4;
      v16 = &v12;
      v17 = 0;
      v19 = 0;
      LOBYTE(v8) = _tlgWriteTransfer_EtwWriteTransfer((int)&dword_266280, byte_2552A0, 0, 0, 5u, &UserData);
    }
  }
  if ( ProcessImageFilename )
    LOBYTE(v8) = FreeTmpBuffer(ProcessImageFilename);
  if ( v6 )
    LOBYTE(v8) = FreeTmpBuffer(v6);
  return v8;
}
