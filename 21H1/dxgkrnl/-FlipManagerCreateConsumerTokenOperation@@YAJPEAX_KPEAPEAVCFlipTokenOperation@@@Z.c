/*
 * XREFs of ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAPEAVCFlipTokenOperation@@@Z @ 0x1C0068514
 * Callers:
 *     NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x1C00611A0 (NtTokenManagerCreateFlipObjectReturnTokenHandle.c)
 * Callees:
 *     ?CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerReturn@@@Z @ 0x1C0068384 (-CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerRetur.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0068918 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall FlipManagerCreateConsumerTokenOperation(
        void *a1,
        unsigned __int64 a2,
        struct CFlipTokenOperation **a3)
{
  int v5; // edi
  unsigned __int64 v6; // rdx
  PVOID v7; // rbx
  struct CFlipTokenOperation *v8; // rax
  struct CFlipWaitedConsumerReturn *v10; // [rsp+20h] [rbp-18h] BYREF
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  Object = 0LL;
  v10 = 0LL;
  v5 = FlipManagerObject::ResolveHandle(a1, 1u, (char)a3, (struct FlipManagerObject **)&Object);
  if ( v5 < 0 )
  {
    v7 = Object;
  }
  else
  {
    v6 = a2;
    v7 = Object;
    v5 = FlipManagerObject::CreateWaitedConsumerReturnForConsumer((FlipManagerObject *)Object, v6, &v10);
    if ( v5 >= 0 )
    {
      v8 = v10;
      *((_QWORD *)v10 + 1) = v7;
      v7 = 0LL;
      *a3 = v8;
    }
  }
  if ( v7 )
    ObfDereferenceObject(v7);
  return (unsigned int)v5;
}
