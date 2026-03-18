/*
 * XREFs of _NtGdiDrawStream@12 @ 0x5C0A8
 * Callers:
 *     <none>
 * Callees:
 *     _GreDrawStream@12 @ 0x5C150 (_GreDrawStream@12.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtGdiDrawStream(int a1, size_t MaxCount, char *Src)
{
  char *v3; // ecx
  int v4; // ebx
  _BYTE *v5; // esi
  _BYTE v7[260]; // [esp+1Ch] [ebp-11Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+120h] [ebp-18h]

  v3 = Src;
  v4 = 0;
  v5 = 0;
  if ( MaxCount <= 0x100 )
  {
    v5 = v7;
LABEL_3:
    ms_exc.registration.TryLevel = 0;
    if ( &v3[MaxCount] < v3 || (unsigned int)&v3[MaxCount] > _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    memcpy(v5, v3, MaxCount);
    ms_exc.registration.TryLevel = -2;
    v4 = GreDrawStream(a1, MaxCount, v5);
    goto LABEL_6;
  }
  if ( MaxCount <= 0x2710000 )
  {
    v5 = (_BYTE *)AllocFreeTmpBuffer(MaxCount);
    if ( !v5 )
      return v4;
    v3 = Src;
    goto LABEL_3;
  }
LABEL_6:
  if ( v5 && v5 != v7 )
    FreeTmpBuffer(v5);
  return v4;
}
