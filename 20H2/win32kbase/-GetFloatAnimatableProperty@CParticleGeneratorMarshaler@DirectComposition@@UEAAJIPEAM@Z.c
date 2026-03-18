/*
 * XREFs of ?GetFloatAnimatableProperty@CParticleGeneratorMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C01D5FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CParticleGeneratorMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CParticleGeneratorMarshaler *this,
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
  int v10; // edx
  int v11; // eax

  v3 = 0;
  v4 = a2 - 3;
  if ( !v4 )
  {
    *a3 = *((float *)this + 21);
    return v3;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v11 = *((_DWORD *)this + 22);
    goto LABEL_17;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v11 = *((_DWORD *)this + 23);
    goto LABEL_17;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v11 = *((_DWORD *)this + 24);
    goto LABEL_17;
  }
  v8 = v7 - 5;
  if ( !v8 )
  {
    v11 = *((_DWORD *)this + 41);
    goto LABEL_17;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v11 = *((_DWORD *)this + 42);
    goto LABEL_17;
  }
  v10 = v9 - 4;
  if ( !v10 )
  {
    v11 = *((_DWORD *)this + 50);
    goto LABEL_17;
  }
  if ( v10 == 1 )
  {
    v11 = *((_DWORD *)this + 51);
LABEL_17:
    *(_DWORD *)a3 = v11;
    return v3;
  }
  return (unsigned int)-1073741811;
}
