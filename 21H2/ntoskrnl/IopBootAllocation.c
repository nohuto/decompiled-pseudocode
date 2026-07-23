/*
 * XREFs of IopBootAllocation @ 0x1407B6124
 * Callers:
 *     IopAllocateBootResourcesInternal @ 0x1407B5FF0 (IopAllocateBootResourcesInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     IopAddRemoveReqDescs @ 0x140752C00 (IopAddRemoveReqDescs.c)
 */

__int64 __fastcall IopBootAllocation(__int64 a1)
{
  unsigned int v1; // r14d
  _QWORD *v2; // rdi
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx
  int v5; // eax
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-30h] BYREF
  _OWORD v10[2]; // [rsp+30h] [rbp-20h] BYREF

  v9[1] = v9;
  v10[0] = 0LL;
  v1 = 0;
  v9[0] = v9;
  *(_QWORD *)(a1 + 16) = a1 + 40;
  v10[1] = 0LL;
  IopAddRemoveReqDescs(*(_QWORD *)(a1 + 40) + 24LL, *(_DWORD *)(*(_QWORD *)(a1 + 40) + 20LL), v9, 1);
  v2 = (_QWORD *)v9[0];
  while ( v2 != v9 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    if ( *((_BYTE *)v3 + 17) )
    {
      v4 = v3 - 6;
      *(_QWORD *)&v10[0] = v3 - 6;
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _OWORD *))(*(v3 - 8) + 32LL))(
             *(_QWORD *)(*(v3 - 8) + 8LL),
             9LL,
             v10);
      v6 = v3 - 2;
      v3[1] = v3;
      v6[1] = v6;
      *v6 = v6;
      v7 = v3 - 4;
      if ( v5 < 0 )
        v1 = v5;
      v7[1] = v7;
      *((_WORD *)v3 + 8) = 0;
      *v7 = v7;
      *v3 = v3;
      v4[1] = v4;
      *v4 = v4;
    }
  }
  return v1;
}
