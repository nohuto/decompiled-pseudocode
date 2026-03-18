/*
 * XREFs of _NtGdiCombineTransform@12 @ 0x21227C
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _GreCombineTransform@12 @ 0x21D461 (_GreCombineTransform@12.c)
 */

int __stdcall NtGdiCombineTransform(ULONG a1, struct _XFORML *a2, struct _XFORML *a3)
{
  void *v3; // ebx
  int v4; // edx
  _BYTE v6[24]; // [esp+14h] [ebp-64h] BYREF
  struct _XFORML v7; // [esp+2Ch] [ebp-4Ch] BYREF
  struct _XFORML v8; // [esp+44h] [ebp-34h] BYREF
  CPPEH_RECORD ms_exc; // [esp+60h] [ebp-18h]

  v3 = (void *)a1;
  memset(&v7, 0, sizeof(v7));
  memset(&v8, 0, sizeof(v8));
  memset(v6, 0, sizeof(v6));
  if ( !ProbeAndConvertXFORM(a2, &v7) || !ProbeAndConvertXFORM(a3, &v8) )
    return 0;
  v4 = GreCombineTransform(&v8);
  if ( v4 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( a1 >= _MmUserProbeAddress )
      v3 = (void *)_MmUserProbeAddress;
    qmemcpy(v3, v6, 0x18u);
    ms_exc.registration.TryLevel = -2;
  }
  return v4;
}
