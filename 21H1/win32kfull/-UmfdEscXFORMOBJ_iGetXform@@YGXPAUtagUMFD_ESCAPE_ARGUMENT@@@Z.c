/*
 * XREFs of ?UmfdEscXFORMOBJ_iGetXform@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x8AFFE
 * Callers:
 *     _UmfdDispatchEscape@4 @ 0x8B7AC (_UmfdDispatchEscape@4.c)
 * Callees:
 *     _XFORMOBJ_iGetXform@8 @ 0x8B07C (_XFORMOBJ_iGetXform@8.c)
 *     ?EnsureTls@UmfdTls@@SGPAV1@XZ @ 0x8BCF4 (-EnsureTls@UmfdTls@@SGPAV1@XZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

void __thiscall UmfdEscXFORMOBJ_iGetXform(volatile void **this)
{
  ULONG *v2; // esi
  struct UmfdTls *v3; // eax
  XFORMOBJ *v4; // edx
  XFORML pxform; // [esp+14h] [ebp-34h] BYREF
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]

  v2 = (ULONG *)(this + 1);
  v3 = UmfdTls::EnsureTls();
  if ( v3 && (v4 = (XFORMOBJ *)*((_DWORD *)v3 + 5)) != 0 )
  {
    memset(&pxform, 0, sizeof(pxform));
    *v2 = XFORMOBJ_iGetXform(v4 + 52, &pxform);
    ms_exc.registration.TryLevel = 0;
    ProbeForWrite(this[2], 0x18u, 4u);
    qmemcpy((void *)this[2], &pxform, 0x18u);
    ms_exc.registration.TryLevel = -2;
  }
  else
  {
    *v2 = -1;
  }
}
