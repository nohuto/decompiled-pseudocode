/*
 * XREFs of ?SetProperty@CManipulationTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800C45C0
 * Callers:
 *     ?ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS@@@Z @ 0x1800C4438 (-ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATIO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800392D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180096450 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CManipulationTransform::SetProperty(CResource *a1, int a2, int a3, __int64 a4)
{
  __int64 v5; // rax
  _BYTE *v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned int v8; // ebx

  if ( a3 != 52 )
    goto LABEL_17;
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v5 = 164LL;
        break;
      case 2:
        v5 = 176LL;
        break;
      case 3:
        v5 = 188LL;
        break;
      default:
        goto LABEL_17;
    }
  }
  else
  {
    v5 = 152LL;
  }
  v6 = (char *)a1 + v5;
  if ( !(CResource *)((char *)a1 + v5) )
  {
LABEL_17:
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0xE8u, 0LL);
    return v8;
  }
  v7 = *(_QWORD *)v6 - *(_QWORD *)a4;
  if ( *(_QWORD *)v6 == *(_QWORD *)a4 )
    v7 = *((unsigned int *)v6 + 2) - (unsigned __int64)*(unsigned int *)(a4 + 8);
  if ( v7 )
  {
    *(_QWORD *)v6 = *(_QWORD *)a4;
    *((_DWORD *)v6 + 2) = *(_DWORD *)(a4 + 8);
    *((_BYTE *)a1 + 264) = 1;
    CResource::NotifyOnChanged((__int64)a1, 0, 0LL);
    CResource::InvalidateAnimationSources(a1);
    CResource::InvalidateAnimationSources(a1);
  }
  return 0;
}
