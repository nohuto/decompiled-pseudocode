/*
 * XREFs of ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z @ 0x1C007BADC
 * Callers:
 *     NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x1C0074FE0 (NtTokenManagerCreateFlipObjectReturnTokenHandle.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??1FlipManagerTokenInitInfo@@QEAA@XZ @ 0x1C0074EA4 (--1FlipManagerTokenInitInfo@@QEAA@XZ.c)
 *     ?CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerReturn@@@Z @ 0x1C007BA00 (-CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerRetur.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C007C0E8 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall FlipManagerCreateConsumerTokenOperation(
        void *a1,
        unsigned __int64 a2,
        struct FlipManagerTokenInitInfo *a3)
{
  int v5; // eax
  PVOID v6; // rdi
  int v7; // esi
  unsigned int v8; // edx
  struct CFlipWaitedConsumerReturn *v9; // rbx
  struct CFlipWaitedConsumerReturn *v10; // rcx
  PVOID Object; // [rsp+20h] [rbp-40h] BYREF
  __int128 v13; // [rsp+28h] [rbp-38h] BYREF
  __int128 v14; // [rsp+38h] [rbp-28h]
  __int128 v15; // [rsp+48h] [rbp-18h]
  struct CFlipWaitedConsumerReturn *v16; // [rsp+98h] [rbp+38h] BYREF

  Object = 0LL;
  v16 = 0LL;
  v5 = FlipManagerObject::ResolveHandle(a1, 1u, (char)a3, (struct FlipManagerObject **)&Object);
  v6 = Object;
  v7 = v5;
  if ( v5 >= 0 )
  {
    v7 = FlipManagerObject::CreateWaitedConsumerReturnForConsumer((FlipManagerObject *)Object, a2, &v16);
    if ( v7 < 0 || (v7 = ObReferenceObjectByPointer(v6, 3u, g_pDxgkCompositionObjectType, 0), v7 < 0) )
    {
      v10 = v16;
    }
    else
    {
      *((_QWORD *)&v14 + 1) = 0LL;
      v15 = 0uLL;
      v9 = v16;
      v13 = 0LL;
      LOBYTE(v14) = 0;
      *((_QWORD *)v16 + 1) = v6;
      *(_OWORD *)a3 = 0LL;
      *((_OWORD *)a3 + 1) = v14;
      *((_OWORD *)a3 + 2) = 0uLL;
      FlipManagerTokenInitInfo::~FlipManagerTokenInitInfo((FlipManagerTokenInitInfo *)&v13, v8);
      *((_QWORD *)a3 + 1) = v6;
      v6 = 0LL;
      v10 = 0LL;
      *(_QWORD *)a3 = v9;
    }
    if ( v10 )
      (*(void (__fastcall **)(struct CFlipWaitedConsumerReturn *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)v7;
}
