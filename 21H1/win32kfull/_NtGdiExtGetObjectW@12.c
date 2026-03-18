/*
 * XREFs of _NtGdiExtGetObjectW@12 @ 0x4B04E
 * Callers:
 *     <none>
 * Callees:
 *     _GreExtGetObjectW@12 @ 0x4B144 (_GreExtGetObjectW@12.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtGdiExtGetObjectW(int a1, size_t MaxCount, char *a3)
{
  signed int v3; // esi
  int ObjectW; // edi
  signed int v6; // [esp+18h] [ebp-270h]
  _BYTE Src[596]; // [esp+1Ch] [ebp-26Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+270h] [ebp-18h]

  memset(Src, 0, 0x250u);
  v3 = MaxCount;
  if ( MaxCount > 0x250 )
    v3 = 592;
  v6 = v3;
  if ( (a1 & 0x7F0000) == 0x100000 )
    v3 = 12;
  ObjectW = GreExtGetObjectW((struct HLFONT__ *)a1, a3 != 0 ? Src : 0);
  if ( (a1 & 0x7F0000) == 0x100000 && v3 >= v6 )
    v3 = v6;
  if ( ObjectW && a3 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( v3 >= ObjectW )
      v3 = ObjectW;
    if ( (unsigned int)&a3[v3] > _MmUserProbeAddress || &a3[v3] <= a3 || ((unsigned __int8)a3 & 1) != 0 )
      *(_BYTE *)_MmUserProbeAddress = 0;
    memcpy(a3, Src, v3);
    ms_exc.registration.TryLevel = -2;
  }
  return ObjectW;
}
