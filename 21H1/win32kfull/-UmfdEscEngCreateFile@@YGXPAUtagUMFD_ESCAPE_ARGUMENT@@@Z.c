/*
 * XREFs of ?UmfdEscEngCreateFile@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCB63
 * Callers:
 *     _UmfdDispatchEscape@4 @ 0x8B7AC (_UmfdDispatchEscape@4.c)
 * Callees:
 *     ___report_rangecheckfailure @ 0xED862 (___report_rangecheckfailure.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?EngCreateFile@@YGPAXPBG@Z @ 0x1FCA70 (-EngCreateFile@@YGPAXPBG@Z.c)
 */

void __thiscall UmfdEscEngCreateFile(void **this)
{
  void **v1; // esi
  unsigned int v2; // edx
  unsigned int v3; // ecx
  int v4; // edi
  const void *v5; // eax
  unsigned int v6; // edi
  wchar_t Str1[264]; // [esp+14h] [ebp-228h] BYREF
  CPPEH_RECORD ms_exc; // [esp+224h] [ebp-18h]

  v1 = this + 1;
  v2 = (unsigned int)this[1];
  if ( !v2 )
    goto LABEL_13;
  v3 = (unsigned int)this[2];
  if ( v3 > 0x104 )
    goto LABEL_13;
  ms_exc.registration.TryLevel = 0;
  v4 = 2 * v3;
  v5 = (const void *)v2;
  if ( 2 * v3 )
  {
    if ( (v2 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v4 + v2 > _MmUserProbeAddress || (v5 = (const void *)v2, v4 + v2 < v2) )
    {
      *(_BYTE *)_MmUserProbeAddress = 0;
      v3 = (unsigned int)v1[1];
      v5 = *v1;
    }
  }
  v6 = v3;
  memcpy(Str1, v5, 2 * v3);
  if ( v6 >= 261 )
    __report_rangecheckfailure();
  Str1[v6] = 0;
  ms_exc.registration.TryLevel = -2;
  if ( __wcsicmp(Str1, L"FAC.ATM") )
LABEL_13:
    *v1 = (void *)-1;
  else
    *v1 = EngCreateFile(Str1);
}
