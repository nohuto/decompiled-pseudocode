/*
 * XREFs of ?UmfdEscEngGetFilePath@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCD05
 * Callers:
 *     _UmfdDispatchEscape@4 @ 0x8B7AC (_UmfdDispatchEscape@4.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YGJPAGIPBG@Z @ 0x48774 (-RtlStringCchCopyW@@YGJPAGIPBG@Z.c)
 *     ?LookUp@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIPAPAU_FONTFILEVIEW@@@Z @ 0x8BF98 (-LookUp@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIPAPAU_FONTFILEVIEW@@@Z.c)
 *     ??0AutoSharedUmfdLookupLock@@QAE@XZ @ 0xF6FD1 (--0AutoSharedUmfdLookupLock@@QAE@XZ.c)
 *     ??1AutoSharedUmfdLookupLock@@QAE@XZ @ 0xF6FF2 (--1AutoSharedUmfdLookupLock@@QAE@XZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _EngGetFilePath@8 @ 0x1DA235 (_EngGetFilePath@8.c)
 */

void __thiscall UmfdEscEngGetFilePath(char *this)
{
  volatile void **v1; // esi
  unsigned int v2; // [esp+0h] [ebp-248h]
  const unsigned __int16 *v3; // [esp+4h] [ebp-244h]
  volatile void *v4; // [esp+14h] [ebp-234h] BYREF
  char v5[4]; // [esp+18h] [ebp-230h] BYREF
  HANDLE h; // [esp+1Ch] [ebp-22Ch] BYREF
  WCHAR pDest[261]; // [esp+20h] [ebp-228h] BYREF
  CPPEH_RECORD ms_exc; // [esp+230h] [ebp-18h]

  v1 = (volatile void **)(this + 4);
  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v5);
  h = 0;
  if ( UmfdFileviewLookup
    && (v4 = *v1, NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(&v4, &h))
    && EngGetFilePath(h, (WCHAR (*)[261])pDest) )
  {
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v5);
    ms_exc.registration.TryLevel = 0;
    ProbeForWrite(v1[1], 0x20Au, 2u);
    if ( RtlStringCchCopyW(522, (char *)v1[1], pDest, v2, v3) < 0 )
      *v1 = 0;
    ms_exc.registration.TryLevel = -2;
    *v1 = (volatile void *)1;
  }
  else
  {
    *v1 = 0;
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v5);
  }
}
