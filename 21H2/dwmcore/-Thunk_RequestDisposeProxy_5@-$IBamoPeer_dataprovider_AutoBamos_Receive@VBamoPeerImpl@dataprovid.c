/*
 * XREFs of ?Thunk_RequestDisposeProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180198820
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z @ 0x1800F03B0 (-TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z.c)
 *     ?RequestDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBaseBamoPeerImpl@23@PEAVBamoStubImpl@23@@Z @ 0x180197A4C (-RequestDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBaseBamoPeerImpl@23@PEAVBamo.c)
 */

__int64 __fastcall IBamoPeer_dataprovider_AutoBamos_Receive<BamoImpl::dataprovider_AutoBamos::BamoPeerImpl>::Thunk_RequestDisposeProxy_5(
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a1,
        unsigned int **a2)
{
  struct Microsoft::BamoImpl::BamoPrincipalImpl *Principal; // rax
  struct Microsoft::BamoImpl::BamoStubImpl *i; // r8

  Principal = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(
                *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)a1 + 3) + 32LL),
                **a2);
  if ( Principal )
  {
    for ( i = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)Principal + 4);
          i;
          i = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)i + 6) )
    {
      if ( *(_DWORD *)(*((_QWORD *)i + 5) + 36LL) == *((_DWORD *)a1 + 9) )
        break;
    }
    Microsoft::BamoImpl::BamoPrincipalImpl::RequestDisposeProxy(Principal, a1, i);
  }
  return 0LL;
}
