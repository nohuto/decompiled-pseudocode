/*
 * XREFs of ?UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXXZ @ 0x18002709C
 * Callers:
 *     ?ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE@@@Z @ 0x180026E14 (-ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMP.c)
 *     ?ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE@@@Z @ 0x180026EEC (-ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSI.c)
 *     ?ProcessSetEnabled@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_SETENABLED@@@Z @ 0x180200B6C (-ProcessSetEnabled@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_SE.c)
 *     ?ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE@@@Z @ 0x18020DF94 (-ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCompositionLight::UpdateRegistrationWithCompositor(CCompositionLight *this)
{
  unsigned int v1; // ebx
  bool v3; // zf
  char v4; // al
  __int64 v5; // r8
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  __int64 v11; // r9
  __int64 v12; // rcx
  CCompositionLight *v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( !*((_BYTE *)this + 169) )
  {
    if ( !*((_BYTE *)this + 170)
      || (v3 = (*(__int64 (__fastcall **)(CCompositionLight *))(*(_QWORD *)this + 200LL))(this) == 0, v4 = 1, v3) )
    {
      v4 = 0;
    }
    if ( *((_BYTE *)this + 171) != v4 )
    {
      v5 = *((_QWORD *)this + 2);
      *((_BYTE *)this + 171) = v4;
      if ( v4 )
      {
        v13 = this;
        v6 = *(_DWORD *)(v5 + 1072);
        v7 = v6 + 1;
        if ( v6 + 1 < v6 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
        }
        else if ( v7 > *(_DWORD *)(v5 + 1068) )
        {
          v8 = DynArrayImpl<0>::AddMultipleAndSet(v5 + 1048, 8LL, 1LL, &v13);
          if ( v8 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC0u, 0LL);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(v5 + 1048) + 8LL * v6) = this;
          *(_DWORD *)(v5 + 1072) = v7;
        }
      }
      else
      {
        v10 = *(_DWORD *)(v5 + 1072);
        v11 = *(_QWORD *)(v5 + 1048);
        if ( v10 )
        {
          do
          {
            if ( this == *(CCompositionLight **)(v11 + 8LL * v1) )
              break;
            ++v1;
          }
          while ( v1 < v10 );
        }
        if ( v1 < v10 )
        {
          for ( ; v1 < v10 - 1; v10 = *(_DWORD *)(v5 + 1072) )
          {
            v12 = v1++;
            *(_QWORD *)(v11 + 8 * v12) = *(_QWORD *)(v11 + 8LL * v1);
          }
          *(_DWORD *)(v5 + 1072) = v10 - 1;
        }
      }
    }
  }
}
