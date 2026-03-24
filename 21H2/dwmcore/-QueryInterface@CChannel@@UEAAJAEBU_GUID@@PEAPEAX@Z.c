/*
 * XREFs of ?QueryInterface@CChannel@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180150E00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CChannel::QueryInterface(CChannel *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax

  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_deb45c4b_ae74_4eca_bcac_6da16704bbfe.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_deb45c4b_ae74_4eca_bcac_6da16704bbfe.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_deb45c4b_ae74_4eca_bcac_6da16704bbfe.Data4;
    if ( !v4 )
      goto LABEL_11;
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v5 )
    {
      v3 = -2147467262;
      *a3 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147467262, 0x1D4u, 0LL);
    }
    else
    {
LABEL_11:
      *a3 = this;
      _InterlockedIncrement((volatile signed __int32 *)this + 2);
      return 0;
    }
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x1C6u, 0LL);
  }
  return v3;
}
