/*
 * XREFs of ?UmfdEscEngGetFileChangeTime@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCC4D
 * Callers:
 *     _UmfdDispatchEscape@4 @ 0x8B7AC (_UmfdDispatchEscape@4.c)
 * Callees:
 *     ?LookUp@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIPAPAU_FONTFILEVIEW@@@Z @ 0x8BF98 (-LookUp@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIPAPAU_FONTFILEVIEW@@@Z.c)
 *     ??0AutoSharedUmfdLookupLock@@QAE@XZ @ 0xF6FD1 (--0AutoSharedUmfdLookupLock@@QAE@XZ.c)
 *     ??1AutoSharedUmfdLookupLock@@QAE@XZ @ 0xF6FF2 (--1AutoSharedUmfdLookupLock@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _EngGetFileChangeTime@8 @ 0x1DA140 (_EngGetFileChangeTime@8.c)
 */

void __thiscall UmfdEscEngGetFileChangeTime(char *this)
{
  volatile void **v1; // esi
  LARGE_INTEGER pChangeTime; // [esp+10h] [ebp-30h] BYREF
  char *v3; // [esp+18h] [ebp-28h]
  volatile void *v4; // [esp+1Ch] [ebp-24h] BYREF
  char v5[4]; // [esp+20h] [ebp-20h] BYREF
  HANDLE h; // [esp+24h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  v1 = (volatile void **)(this + 4);
  v3 = this + 4;
  pChangeTime.QuadPart = 0LL;
  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v5);
  h = 0;
  if ( UmfdFileviewLookup
    && (v4 = *v1, NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(&v4, &h))
    && EngGetFileChangeTime(h, &pChangeTime) )
  {
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v5);
    ms_exc.registration.TryLevel = 0;
    ProbeForWrite(v1[1], 8u, 4u);
    *(LARGE_INTEGER *)v1[1] = pChangeTime;
    ms_exc.registration.TryLevel = -2;
    *v1 = (volatile void *)1;
  }
  else
  {
    *v1 = 0;
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v5);
  }
}
