/*
 * XREFs of GreGetBitmapDimension @ 0x1C02C0EB0
 * Callers:
 *     NtGdiGetBitmapDimension @ 0x1C02AED50 (NtGdiGetBitmapDimension.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBitmapDimension(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rax
  DYNAMICMODECHANGESHARELOCK *v9; // rcx
  __int64 v10; // rbx
  ULONG v11; // ecx
  char v13; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v13, (__int64)a2, a3, a4);
  LOBYTE(v7) = 5;
  v8 = HmgShareLockCheck(a1, v7);
  v10 = v8;
  if ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 112) & 0x4000000) == 0 )
      goto LABEL_8;
    if ( a2 )
    {
      v6 = 1;
      *a2 = *(_QWORD *)(v8 + 152);
      goto LABEL_8;
    }
    v11 = 87;
  }
  else
  {
    v11 = 6;
  }
  EngSetLastError(v11);
LABEL_8:
  if ( v10 )
    DEC_SHARE_REF_CNT(v10);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v9);
  return v6;
}
