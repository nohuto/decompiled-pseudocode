/*
 * XREFs of ?DxgkCddIsSourceOwnedByDWM@@YAJQEAXIPEAE@Z @ 0x1C00D5B50
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000BA54 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C001A4A0 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkCddIsSourceOwnedByDWM(void *const a1, unsigned int a2, bool *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  ADAPTER_DISPLAY *v9; // rcx
  _BYTE v11[8]; // [rsp+20h] [rbp-28h] BYREF
  void *v12; // [rsp+28h] [rbp-20h]
  char v13; // [rsp+30h] [rbp-18h]

  v3 = (__int64)a1;
  v12 = a1;
  v4 = a2;
  v13 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
  if ( *(_DWORD *)(v3 + 200) != 1 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6);
    v8[3] = v3;
    v3 = -1073741130LL;
LABEL_5:
    v8[4] = v3;
    goto LABEL_8;
  }
  v9 = *(ADAPTER_DISPLAY **)(v3 + 2696);
  if ( !v9 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(0LL, v6);
    v8[3] = v3;
    v3 = -1073741811LL;
    goto LABEL_5;
  }
  if ( *((_DWORD *)v9 + 20) > (unsigned int)v4 )
  {
    LODWORD(v3) = 0;
    *a3 = (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v9, (unsigned int)v4) == 1;
    goto LABEL_10;
  }
  v8 = (_QWORD *)WdLogNewEntry5_WdError(v9, v6);
  v8[3] = v3;
  LODWORD(v3) = -1073741811;
  v8[5] = -1073741811LL;
  v8[4] = v4;
LABEL_8:
  WdLogEvent5_WdError(v8);
LABEL_10:
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
  return (unsigned int)v3;
}
