/*
 * XREFs of ?UmfdEscEngMapFontFileFD@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x8BD34
 * Callers:
 *     _UmfdDispatchEscape@4 @ 0x8B7AC (_UmfdDispatchEscape@4.c)
 * Callees:
 *     _EngMapFontFileFDInternal@16 @ 0x8BDE8 (_EngMapFontFileFDInternal@16.c)
 *     ?LookUp@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIPAPAU_FONTFILEVIEW@@@Z @ 0x8BF98 (-LookUp@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIPAPAU_FONTFILEVIEW@@@Z.c)
 *     ??0AutoSharedUmfdLookupLock@@QAE@XZ @ 0xF6FD1 (--0AutoSharedUmfdLookupLock@@QAE@XZ.c)
 *     ??1AutoSharedUmfdLookupLock@@QAE@XZ @ 0xF6FF2 (--1AutoSharedUmfdLookupLock@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

void __thiscall UmfdEscEngMapFontFileFD(char *this)
{
  volatile void **v1; // edi
  volatile void *v2; // [esp+14h] [ebp-2Ch] BYREF
  char v3[4]; // [esp+18h] [ebp-28h] BYREF
  int v4; // [esp+1Ch] [ebp-24h] BYREF
  int v5; // [esp+20h] [ebp-20h] BYREF
  int v6; // [esp+24h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  v5 = 0;
  v4 = 0;
  v1 = (volatile void **)(this + 4);
  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v3);
  v6 = 0;
  if ( UmfdFileviewLookup
    && (v2 = *v1, (unsigned __int8)NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(&v2, &v6))
    && EngMapFontFileFDInternal(v6, &v5, &v4, 0) )
  {
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v3);
    ms_exc.registration.TryLevel = 0;
    ProbeForWrite(v1[1], 4u, 4u);
    ProbeForWrite(v1[2], 4u, 4u);
    *(_DWORD *)v1[1] = v5;
    *(_DWORD *)v1[2] = v4;
    ms_exc.registration.TryLevel = -2;
    *v1 = (volatile void *)1;
  }
  else
  {
    *v1 = 0;
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v3);
  }
}
