/*
 * XREFs of MiLogStrongCodeDriverLoadFailure @ 0x1408C812C
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x14075D134 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiResolveImageImports @ 0x14075D184 (MiResolveImageImports.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402514DC (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgCreate1Sz_char @ 0x140270A0C (_tlgCreate1Sz_char.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

void __fastcall MiLogStrongCodeDriverLoadFailure(const CHAR *Src, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // rdi
  _QWORD *Pool; // rax
  __int64 v8; // rbx
  void *v9; // rcx
  __int64 *v10; // rax
  int v11; // [rsp+20h] [rbp-D8h]
  int v12; // [rsp+28h] [rbp-D0h]
  int v13; // [rsp+40h] [rbp-B8h] BYREF
  int v14; // [rsp+44h] [rbp-B4h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v17[16]; // [rsp+70h] [rbp-88h] BYREF
  _DWORD *v18; // [rsp+80h] [rbp-78h]
  int v19; // [rsp+88h] [rbp-70h]
  int v20; // [rsp+8Ch] [rbp-6Ch]
  __int64 v21; // [rsp+90h] [rbp-68h]
  _DWORD v22[2]; // [rsp+98h] [rbp-60h] BYREF
  int *v23; // [rsp+A0h] [rbp-58h]
  int v24; // [rsp+A8h] [rbp-50h]
  int v25; // [rsp+ACh] [rbp-4Ch]
  int *v26; // [rsp+B0h] [rbp-48h]
  int v27; // [rsp+B8h] [rbp-40h]
  int v28; // [rsp+BCh] [rbp-3Ch]
  __int64 *v29; // [rsp+C0h] [rbp-38h]
  int v30; // [rsp+C8h] [rbp-30h]
  int v31; // [rsp+CCh] [rbp-2Ch]

  if ( *(_QWORD *)&qword_140C4EF20 )
  {
    if ( **(_DWORD **)&qword_140C4EF20 > 5u )
    {
      if ( tlgKeywordOn(*(__int64 *)&qword_140C4EF20, 0x400000000000LL) )
      {
        tlgCreate1Sz_char((__int64)v17, Src);
        v20 = 0;
        v22[1] = 0;
        v25 = 0;
        v28 = 0;
        v31 = 0;
        v18 = v22;
        v21 = *(_QWORD *)(a2 + 96);
        v22[0] = *(unsigned __int16 *)(a2 + 88);
        v13 = *(_DWORD *)(a2 + 120);
        v23 = &v13;
        v14 = *(_DWORD *)(a2 + 156);
        v26 = &v14;
        v15 = 2164260864LL;
        v24 = 4;
        v27 = 4;
        v29 = &v15;
        v30 = 8;
        v19 = 2;
        tlgWriteEx_EtwWriteEx(v5, (unsigned __int8 *)&byte_140025DD3, v4, 1u, v11, v12, 8u, &v16);
      }
    }
  }
  else
  {
    v6 = -1LL;
    do
      ++v6;
    while ( Src[v6] );
    Pool = MiAllocatePool(256, v6 + *(unsigned __int16 *)(a2 + 88) + 49LL, 0x46446D4Du);
    v8 = (__int64)Pool;
    if ( Pool )
    {
      Pool[2] = Pool + 6;
      memmove(Pool + 6, Src, v6 + 1);
      v9 = (void *)(v8 + v6 + 49);
      *(_QWORD *)(v8 + 32) = v9;
      memmove(v9, *(const void **)(a2 + 96), *(unsigned __int16 *)(a2 + 88));
      *(_WORD *)(v8 + 24) = *(_WORD *)(a2 + 88);
      *(_WORD *)(v8 + 26) = *(_WORD *)(a2 + 88);
      *(_DWORD *)(v8 + 40) = *(_DWORD *)(a2 + 120);
      *(_DWORD *)(v8 + 44) = *(_DWORD *)(a2 + 156);
      v10 = (__int64 *)qword_140C4CD50;
      if ( *(PVOID **)qword_140C4CD50 != &qword_140C4CD48 )
        __fastfail(3u);
      *(_QWORD *)v8 = &qword_140C4CD48;
      *(_QWORD *)(v8 + 8) = v10;
      *v10 = v8;
      qword_140C4CD50 = v8;
    }
  }
}
