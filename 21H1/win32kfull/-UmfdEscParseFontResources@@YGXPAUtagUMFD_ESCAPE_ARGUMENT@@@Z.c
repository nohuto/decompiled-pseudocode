/*
 * XREFs of ?UmfdEscParseFontResources@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0xE8B2C
 * Callers:
 *     _UmfdDispatchEscape@4 @ 0x8B7AC (_UmfdDispatchEscape@4.c)
 * Callees:
 *     ?LookUp@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIPAPAU_FONTFILEVIEW@@@Z @ 0x8BF98 (-LookUp@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIPAPAU_FONTFILEVIEW@@@Z.c)
 *     _cParseFontResources@16 @ 0xE8BCC (_cParseFontResources@16.c)
 *     ??0AutoSharedUmfdLookupLock@@QAE@XZ @ 0xF6FD1 (--0AutoSharedUmfdLookupLock@@QAE@XZ.c)
 *     ??1AutoSharedUmfdLookupLock@@QAE@XZ @ 0xF6FF2 (--1AutoSharedUmfdLookupLock@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __thiscall UmfdEscParseFontResources(char *this)
{
  char *v1; // edi
  int v2; // ebx
  volatile void *v3; // eax
  SIZE_T v4; // ecx
  int v5; // [esp+14h] [ebp-34h] BYREF
  char v6[4]; // [esp+18h] [ebp-30h] BYREF
  _DWORD *v7; // [esp+1Ch] [ebp-2Ch]
  int v8; // [esp+20h] [ebp-28h] BYREF
  int v9; // [esp+24h] [ebp-24h]
  int v10; // [esp+28h] [ebp-20h] BYREF
  void *Src; // [esp+2Ch] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]

  v1 = this + 4;
  v7 = this + 4;
  v9 = 0;
  v8 = 0;
  Src = 0;
  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v6);
  v10 = 0;
  if ( UmfdFileviewLookup
    && (v5 = *(_DWORD *)v1, NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(&v5, &v10))
    && *(_DWORD *)(v10 + 12) )
  {
    v2 = cParseFontResources(&v8, *((_DWORD *)v1 + 1) != 0 ? &Src : 0);
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v6);
    if ( v2 )
    {
      v3 = (volatile void *)*((_DWORD *)v1 + 1);
      if ( v3 )
      {
        v4 = *((_DWORD *)v1 + 2);
        if ( 4 * v2 <= v4 )
        {
          ms_exc.registration.TryLevel = 0;
          ProbeForWrite(v3, v4, 4u);
          memcpy(*((void **)v1 + 1), Src, 4 * v2);
          ms_exc.registration.TryLevel = -2;
        }
        else
        {
          v2 = 0;
        }
        EngFreeMem(Src);
      }
      if ( v2 )
      {
        ms_exc.registration.TryLevel = 1;
        ProbeForWrite(*((volatile void **)v1 + 3), 4u, 4u);
        ProbeForWrite(*((volatile void **)v1 + 4), 4u, 4u);
        **((_DWORD **)v1 + 3) = v9;
        **((_DWORD **)v1 + 4) = v8;
        ms_exc.registration.TryLevel = -2;
      }
    }
    *v7 = v2;
  }
  else
  {
    *(_DWORD *)v1 = 0;
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v6);
  }
}
