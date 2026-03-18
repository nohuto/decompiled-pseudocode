/*
 * XREFs of GreSetBitmapDimension @ 0x1C02C0F54
 * Callers:
 *     NtGdiSetBitmapDimension @ 0x1C02B0740 (NtGdiSetBitmapDimension.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetBitmapDimension(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // ebp
  unsigned int v7; // r14d
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rax
  DYNAMICMODECHANGESHARELOCK *v11; // rcx
  __int64 v12; // rbx
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = a3;
  v7 = a2;
  v8 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v14, a2, a3, (__int64)a4);
  LOBYTE(v9) = 5;
  v10 = HmgShareLockCheck(a1, v9);
  v12 = v10;
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 112) & 0x4000000) != 0 )
    {
      if ( a4 )
        *a4 = *(_QWORD *)(v10 + 152);
      v14[1] = __PAIR64__(v6, v7);
      v8 = 1;
      *(_QWORD *)(v10 + 152) = __PAIR64__(v6, v7);
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  if ( v12 )
    DEC_SHARE_REF_CNT(v12);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v11);
  return v8;
}
