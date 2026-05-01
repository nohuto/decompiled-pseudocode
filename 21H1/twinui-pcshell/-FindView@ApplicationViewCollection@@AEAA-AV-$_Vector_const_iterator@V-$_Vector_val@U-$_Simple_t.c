/*
 * XREFs of ?FindView@ApplicationViewCollection@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x1803BA75C
 * Callers:
 *     ?EnterFullScreenForView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1803BA5D0 (-EnterFullScreenForView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?IsViewFullScreen@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1803BB760 (-IsViewFullScreen@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?RemoveView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x1803BC1D4 (-RemoveView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003EF48 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

struct IUnknown ***__fastcall ApplicationViewCollection::FindView(
        struct IUnknown ***a1,
        struct IUnknown ***a2,
        struct IUnknown *a3)
{
  struct IUnknown **v3; // rsi
  struct IUnknown **v5; // rbx
  struct IUnknown ***result; // rax
  struct IUnknown *v7; // [rsp+40h] [rbp+18h]

  v7 = a3;
  v3 = a1[1];
  v5 = *a1;
  if ( *a1 != v3 )
  {
    while ( !(unsigned int)SHIsSameObject(a3, *v5) )
    {
      if ( ++v5 == v3 )
        break;
      a3 = v7;
    }
  }
  result = a2;
  *a2 = v5;
  return result;
}
