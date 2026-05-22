/*
 * XREFs of ?UpdateLastInputTimestamp@InputStateManager@@AEAAXPEAUInputInfo@@@Z @ 0x180087FBC
 * Callers:
 *     ?OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z @ 0x180087CF0 (-OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180027FE0 (-IsEdition@@YA_N_K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2102c_29871746@@@details@wil@@QEAA_NXZ @ 0x180041074 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2102c_29871746@@@detail.c)
 *     ?TranslateInputType@InputStateManager@@AEAA?AW4_LINP_SOURCE@@W4InputType@@@Z @ 0x180087F68 (-TranslateInputType@InputStateManager@@AEAA-AW4_LINP_SOURCE@@W4InputType@@@Z.c)
 */

void __fastcall InputStateManager::UpdateLastInputTimestamp(InputStateManager *this, struct InputInfo *a2)
{
  DWORD TickCount; // r15d
  unsigned __int16 v5; // si
  __int64 v6; // rcx
  unsigned int v7; // ebp
  unsigned int v8; // r12d
  int v9; // ebx
  unsigned int v10; // eax
  int v11; // ecx

  TickCount = GetTickCount();
  v5 = 0;
  v7 = -1;
  v8 = InputStateManager::TranslateInputType(v6, *(_DWORD *)a2);
  if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    v5 = *((_WORD *)a2 + 98);
  }
  else if ( (*(_DWORD *)a2 & 0x1000) != 0 )
  {
    v5 = *((_WORD *)a2 + 46);
  }
  v9 = ((*(_DWORD *)a2 & *((_DWORD *)this + 44)) != 0 ? 3 : 1) | 4;
  if ( (*(_DWORD *)a2 & *((_DWORD *)this + 45)) == 0 )
    v9 = (*(_DWORD *)a2 & *((_DWORD *)this + 44)) != 0 ? 3 : 1;
  if ( *((_BYTE *)a2 + 49) )
  {
    v9 &= ~1u;
  }
  else
  {
    v7 = 0;
    if ( (*(_BYTE *)a2 & 0xC4) != 0 )
      v7 = *((_DWORD *)this + 47);
  }
  if ( *(_DWORD *)a2 != 2048 )
  {
    if ( *(_DWORD *)a2 == 64 )
    {
      if ( *((float *)a2 + 10) < 0.03125 )
        return;
LABEL_22:
      NtMITUpdateInputGlobals(TickCount, v8, v5, v7, v9);
      return;
    }
    if ( (*(_DWORD *)a2 & 0x662600) != 0 )
    {
      v10 = *((_DWORD *)a2 + 16);
      if ( v10 > 0xC )
        goto LABEL_22;
      v11 = 4464;
      if ( !_bittest(&v11, v10) )
        goto LABEL_22;
    }
    else if ( *(_DWORD *)a2 != 4
           || !IsEdition(8778LL)
           || !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2102c_29871746>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2102c_29871746>::GetImpl'::`2'::impl) )
    {
      goto LABEL_22;
    }
  }
}
