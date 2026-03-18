/*
 * XREFs of _NtGdiTransformPoints@20 @ 0x8D98C
 * Callers:
 *     <none>
 * Callees:
 *     _GreTransformPoints@20 @ 0x8DA90 (_GreTransformPoints@20.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtGdiTransformPoints(int a1, char *Src, char *a3, int a4, int a5)
{
  int v5; // edi
  int v6; // ecx
  _BYTE *v8; // [esp+1Ch] [ebp-70h]
  _BYTE v9[84]; // [esp+20h] [ebp-6Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+74h] [ebp-18h]

  v5 = 1;
  v8 = v9;
  if ( a4 <= 0 )
    return 1;
  if ( a4 > 10 )
  {
    v8 = 0;
    if ( (unsigned int)a4 <= 0x4E2000 )
      v8 = (_BYTE *)AllocFreeTmpBuffer(8 * a4);
  }
  if ( v8 )
  {
    ms_exc.registration.TryLevel = 0;
    v6 = 8 * a4;
    if ( 8 * a4 && ((unsigned int)&Src[v6] > _MmUserProbeAddress || &Src[v6] < Src) )
      *(_BYTE *)_MmUserProbeAddress = 0;
    memcpy(v8, Src, 8 * a4);
    ms_exc.registration.TryLevel = -2;
  }
  else
  {
    v5 = 0;
  }
  if ( v5 )
  {
    v5 = GreTransformPoints(v8, a4, a5);
    if ( v5 )
    {
      ms_exc.registration.TryLevel = 1;
      if ( (unsigned int)&a3[8 * a4] > _MmUserProbeAddress || &a3[8 * a4] <= a3 )
        *(_BYTE *)_MmUserProbeAddress = 0;
      memcpy(a3, v8, 8 * a4);
      ms_exc.registration.TryLevel = -2;
    }
  }
  if ( v8 )
  {
    if ( v8 != v9 )
      FreeTmpBuffer(v8);
  }
  return v5;
}
