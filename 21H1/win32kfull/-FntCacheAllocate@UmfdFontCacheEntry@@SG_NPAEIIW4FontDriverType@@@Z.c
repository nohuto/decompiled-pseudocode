/*
 * XREFs of ?FntCacheAllocate@UmfdFontCacheEntry@@SG_NPAEIIW4FontDriverType@@@Z @ 0xECB3C
 * Callers:
 *     ?UmfdEscEngFntCacheFlush@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0xECB1A (-UmfdEscEngFntCacheFlush@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ?Win32ProbeForRead@@YGXPAXKK@Z @ 0x8D388 (-Win32ProbeForRead@@YGXPAXKK@Z.c)
 *     _EngFntCacheAllocInternal@12 @ 0xECBCE (_EngFntCacheAllocInternal@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _EngFntCacheFault@8 @ 0x1E8664 (_EngFntCacheFault@8.c)
 */

char __fastcall UmfdFontCacheEntry::FntCacheAllocate(const void *a1, size_t a2, ULONG ulFastCheckSum, int a4)
{
  _DWORD *v6; // eax
  unsigned int v8; // [esp+0h] [ebp-30h]
  unsigned int v9; // [esp+0h] [ebp-30h]
  unsigned int v10; // [esp+4h] [ebp-2Ch]
  unsigned int *v11; // [esp+4h] [ebp-2Ch]
  int v12; // [esp+10h] [ebp-20h] BYREF
  unsigned int v13; // [esp+14h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  Win32ProbeForRead(a2, (ULONG)a1, (void *)1, v8, v10);
  ms_exc.registration.TryLevel = -2;
  v13 = 0;
  if ( (ULongAdd(a2, 8u, (int *)&v13, v9, v11) & 0x80000000) != 0 )
    return 0;
  v12 = 0;
  v6 = (_DWORD *)EngFntCacheAllocInternal(&v12);
  if ( v12 )
    return 0;
  if ( v6 )
  {
    v6[1] = 0;
    *v6 = a4;
    ms_exc.registration.TryLevel = 1;
    memcpy(v6 + 2, a1, a2);
    ms_exc.registration.TryLevel = -2;
  }
  return 1;
}
