/*
 * XREFs of ?GetFloatAnimatableProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C01E3C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLinearTransferEffectMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CLinearTransferEffectMarshaler *this,
        int a2,
        float *a3)
{
  unsigned int v3; // r9d
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // eax

  v3 = 0;
  if ( !a2 )
  {
    *a3 = *((float *)this + 28);
    return v3;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v10 = *((_DWORD *)this + 29);
    goto LABEL_17;
  }
  v5 = v4 - 2;
  if ( !v5 )
  {
    v10 = *((_DWORD *)this + 30);
    goto LABEL_17;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v10 = *((_DWORD *)this + 31);
    goto LABEL_17;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    v10 = *((_DWORD *)this + 32);
    goto LABEL_17;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v10 = *((_DWORD *)this + 33);
    goto LABEL_17;
  }
  v9 = v8 - 2;
  if ( !v9 )
  {
    v10 = *((_DWORD *)this + 34);
    goto LABEL_17;
  }
  if ( v9 == 1 )
  {
    v10 = *((_DWORD *)this + 35);
LABEL_17:
    *(_DWORD *)a3 = v10;
    return v3;
  }
  return (unsigned int)-1073741811;
}
