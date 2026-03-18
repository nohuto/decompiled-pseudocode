/*
 * XREFs of ?GetControlPoints@Segment@Path@@QEBA?AV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x180221738
 * Callers:
 *     ?GetControlPointsForModification@Segment@Path@@QEAA?AV?$span@UD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x1802217C0 (-GetControlPointsForModification@Segment@Path@@QEAA-AV-$span@UD2D_POINT_2F@@$0-0@gsl@@XZ.c)
 *     ?GetEndPoint@Segment@Path@@QEBA?AUD2D_POINT_2F@@XZ @ 0x180221814 (-GetEndPoint@Segment@Path@@QEBA-AUD2D_POINT_2F@@XZ.c)
 *     ??Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ @ 0x1802223E4 (--Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ.c)
 *     ??Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ @ 0x180222414 (--Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall Path::Segment::GetControlPoints(_BYTE *a1, _QWORD *a2)
{
  const void *retaddr; // [rsp+28h] [rbp+0h]

  switch ( *a1 )
  {
    case 0:
      goto LABEL_12;
    case 1:
      *a2 = 0LL;
      a2[1] = 0LL;
      return a2;
    case 2:
    case 3:
LABEL_12:
      *a2 = 1LL;
      break;
    case 4:
      *a2 = 2LL;
      break;
    case 5:
      *a2 = 3LL;
      break;
    default:
      ModuleFailFastForHRESULT(-2147024809, retaddr);
  }
  a2[1] = a1 + 8;
  if ( a1 == (_BYTE *)-8LL )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  return a2;
}
