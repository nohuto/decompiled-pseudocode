/*
 * XREFs of sub_1800147A0 @ 0x1800147A0
 * Callers:
 *     sub_180015834 @ 0x180015834 (sub_180015834.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_18000F150 @ 0x18000F150 (sub_18000F150.c)
 *     sub_180017BB0 @ 0x180017BB0 (sub_180017BB0.c)
 *     sub_18001A074 @ 0x18001A074 (sub_18001A074.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     memset @ 0x18003A7D8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800147A0(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // rsi
  unsigned __int16 *v9; // rdx
  __int64 v10; // rcx
  char v11; // bp
  unsigned __int16 **v12; // r10
  int v13; // r9d
  int v14; // r8d
  void *v15; // rbx
  _QWORD *v16; // rdx
  HANDLE ProcessHeap; // rax
  void *v18; // rax
  void *v19; // rbx
  void *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r14
  _QWORD *v26; // r8
  _QWORD *v27; // rax
  volatile signed __int32 *v28; // rdx
  void *v30; // [rsp+20h] [rbp-48h]
  _QWORD v31[2]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD *v32; // [rsp+38h] [rbp-30h]
  volatile signed __int32 *v33; // [rsp+70h] [rbp+8h] BYREF
  int v34; // [rsp+80h] [rbp+18h]

  v6 = 0;
  v7 = (unsigned int)-a3;
  v8 = ((_DWORD)v7 != 0 ? 0x18 : 0) + a1 + 288;
  v31[1] = v8;
  sub_180017BB0(v31, a2, v7);
  v10 = 0LL;
  v11 = 1;
  if ( *(int *)(v8 + 16) <= 0 )
  {
LABEL_9:
    v10 = 0xFFFFFFFFLL;
  }
  else
  {
    v12 = *(unsigned __int16 ***)v8;
    while ( 1 )
    {
      if ( !v31[0] )
        sub_18000A174(-2147467259);
      v9 = *v12;
      do
      {
        v13 = *(unsigned __int16 *)((char *)v9 + v31[0] - (_QWORD)*v12);
        v14 = *v9 - v13;
        if ( v14 )
          break;
        ++v9;
      }
      while ( v13 );
      if ( !v14 )
        break;
      v10 = (unsigned int)(v10 + 1);
      ++v12;
      if ( (int)v10 >= *(_DWORD *)(v8 + 16) )
        goto LABEL_9;
    }
  }
  if ( (_DWORD)v10 == -1 )
  {
    v15 = 0LL;
  }
  else
  {
    if ( (int)v10 < 0 || (int)v10 >= *(_DWORD *)(v8 + 16) )
    {
      sub_18001A074(v10, v9);
      JUMPOUT(0x1800149DFLL);
    }
    v15 = *(void **)(*(_QWORD *)(v8 + 8) + 8LL * (int)v10);
  }
  v16 = (_QWORD *)(v31[0] - 24LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v31[0] - 24LL + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 8LL))(*v16);
  if ( v15 )
    goto LABEL_33;
  ProcessHeap = GetProcessHeap();
  v18 = HeapAlloc(ProcessHeap, 0, 0x54uLL);
  v19 = v18;
  v30 = v18;
  if ( v18 )
  {
    memset(v18, 0, 0x54uLL);
    sub_180017BB0(&v33, a2, v21);
    v22 = o__recalloc(*(_QWORD *)v8, *(_DWORD *)(v8 + 16) + 1, 8LL);
    if ( v22 )
    {
      *(_QWORD *)v8 = v22;
      v23 = o__recalloc(*(_QWORD *)(v8 + 8), *(_DWORD *)(v8 + 16) + 1, 8LL);
      v24 = v23;
      if ( v23 )
      {
        *(_QWORD *)(v8 + 8) = v23;
        v34 = *(_DWORD *)(v8 + 16);
        v25 = v34;
        v26 = (_QWORD *)(*(_QWORD *)v8 + 8LL * v34);
        v32 = v26;
        if ( v26 )
        {
          sub_18000F150(v26, (const void **)&v33);
          v24 = *(_QWORD *)(v8 + 8);
        }
        v27 = (_QWORD *)(v24 + 8 * v25);
        v32 = v27;
        if ( v27 )
          *v27 = v19;
        ++*(_DWORD *)(v8 + 16);
        v11 = 0;
      }
    }
    v28 = v33 - 6;
    if ( _InterlockedExchangeAdd(v33 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v28 + 8LL))(*(_QWORD *)v28);
    if ( v11 )
    {
      v6 = -2147024882;
      v20 = v30;
      goto LABEL_20;
    }
    v15 = v30;
    sub_180039D98(0LL);
LABEL_33:
    *a4 = v15;
    return v6;
  }
  v6 = -2147024882;
  v20 = 0LL;
LABEL_20:
  sub_180039D98(v20);
  return v6;
}
