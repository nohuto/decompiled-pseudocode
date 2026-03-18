/*
 * XREFs of ?EnableHighPrecisionBrightness@LPMDisplayCtrl@@QEAAJEPEBU_WIN32_POWERINFO_BRIGHTNESSCHANGE@@@Z @ 0x1C02712E0
 * Callers:
 *     ?DxgkEnableHighPrecisionBrightness@@YAJEPEBU_WIN32_POWERINFO_BRIGHTNESSCHANGE@@@Z @ 0x1C0271070 (-DxgkEnableHighPrecisionBrightness@@YAJEPEBU_WIN32_POWERINFO_BRIGHTNESSCHANGE@@@Z.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0008E58 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 */

__int64 __fastcall LPMDisplayCtrl::EnableHighPrecisionBrightness(
        LPMDisplayCtrl *this,
        __int64 a2,
        const struct _WIN32_POWERINFO_BRIGHTNESSCHANGE *a3)
{
  PFILE_OBJECT *v3; // rsi
  char v5; // r14
  char v6; // r12
  signed int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // edx
  unsigned int v11; // r8d

  v3 = FileObject;
  v5 = a2;
  v6 = 1;
  if ( !(_BYTE)a2 )
  {
    *(_OWORD *)(FileObject + 17) = 0LL;
    *(_OWORD *)(v3 + 19) = 0LL;
    *((_DWORD *)v3 + 11) = 0;
    goto LABEL_7;
  }
  if ( *((_DWORD *)FileObject + 10) && *((_DWORD *)FileObject + 28) )
  {
    memmove(FileObject + 17, a3, 0x20uLL);
    *((_DWORD *)v3 + 11) = 1;
LABEL_7:
    v7 = 0;
    goto LABEL_8;
  }
  v7 = -1073741637;
  *(_OWORD *)(FileObject + 17) = 0LL;
  *(_OWORD *)(v3 + 19) = 0LL;
  *((_DWORD *)v3 + 11) = 0;
  v8 = WdLogNewEntry5_WdError(this, a2);
  *(_QWORD *)(v8 + 24) = -1073741637LL;
  WdLogEvent5_WdError(v8);
LABEL_8:
  if ( !v5 || v7 < 0 )
    v6 = 0;
  v9 = *(_QWORD *)(*(_QWORD *)&v3[2][1].Type + 64LL);
  KeWaitForSingleObject((PVOID)(v9 + 4464), Executive, 0, 0, 0LL);
  *(_BYTE *)(v9 + 4449) = v6;
  KeReleaseMutex((PRKMUTEX)(v9 + 4464), 0);
  v10 = -1;
  if ( v5 )
    v11 = *((_DWORD *)a3 + 5);
  else
    v11 = -1;
  if ( v5 )
    v10 = *((_DWORD *)a3 + 1);
  DxgkLogCodePointPacket(0x53u, v10, v11, v7, *(__int64 *)((char *)&v3[2][1].FileName.Buffer + 4));
  return (unsigned int)v7;
}
