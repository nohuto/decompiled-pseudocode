/*
 * XREFs of ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0080E90
 * Callers:
 *     GreCreateRectRgnIndirect @ 0x1C0083440 (GreCreateRectRgnIndirect.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0089A90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreCreateRectRgn @ 0x1C014F830 (GreCreateRectRgn.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0123164 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
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
        if ( qword_1C0252C60 && (int)qword_1C0252C60() >= 0 && qword_1C0252C68 )
          qword_1C0252C68(v4, v3);
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
