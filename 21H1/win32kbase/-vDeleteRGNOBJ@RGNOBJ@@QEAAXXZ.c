/*
 * XREFs of ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0008DE0
 * Callers:
 *     GreCreateRectRgnIndirect @ 0x1C007CB20 (GreCreateRectRgnIndirect.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00829C0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreCreateRectRgn @ 0x1C0155B80 (GreCreateRectRgn.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0129144 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall RGNOBJ::vDeleteRGNOBJ(RGNOBJ *this)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  void *v4; // r14
  unsigned __int8 *v5; // rcx

  v1 = *(_QWORD *)this;
  if ( !*(_QWORD *)this || (struct REGION *)v1 == prgnDefault )
  {
    *(_QWORD *)this = 0LL;
  }
  else
  {
    v3 = *(_QWORD *)(v1 + 88);
    if ( v3 )
    {
      if ( *(_DWORD *)(v1 + 24) == 112 )
      {
        v4 = RGNMEMOBJ::s_pSCANLookAsideList;
        if ( qword_1C0258C20 && (int)qword_1C0258C20() >= 0 && qword_1C0258C28 )
          qword_1C0258C28(v4, v3);
      }
      else if ( *(_DWORD *)(v1 + 24) > 0x70u )
      {
        Win32FreePool(v3);
      }
      *(_QWORD *)(v1 + 88) = 0LL;
    }
    v5 = gpTypeIsolation[7];
    if ( v5 )
      NSInstrumentation::CTypeIsolation<28672,112>::Free(v5, v1);
    *(_QWORD *)this = 0LL;
  }
}
