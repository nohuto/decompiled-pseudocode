/*
 * XREFs of ?CaptureKerningPairs@QueryFontTreeRequest@@AAEXXZ @ 0x24AA6E
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontTreeRequest@@UAEXPAX@Z @ 0x8CD52 (-CaptureUsermodeParameters@QueryFontTreeRequest@@UAEXPAX@Z.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SGPAXW4FontDriverType@@KPAXIPA_NP6G_N11I@Z@Z @ 0x8CDC4 (-ObtainKernelmodeAllocation@UmfdAllocation@@SGPAXW4FontDriverType@@KPAXIPA_NP6G_N11I@Z@Z.c)
 *     ?Win32ProbeForRead@@YGXPAXKK@Z @ 0x8D388 (-Win32ProbeForRead@@YGXPAXKK@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

void __thiscall QueryFontTreeRequest::CaptureKerningPairs(QueryFontTreeRequest *this)
{
  _WORD *v1; // esi
  unsigned int v2; // ebx
  ULONG i; // ecx
  int v4; // edi
  unsigned int v5; // ecx
  int v6; // eax
  int *v7; // esi
  int v8; // eax
  char *v9; // eax
  void *v10; // [esp-10h] [ebp-40h]
  size_t v11; // [esp-Ch] [ebp-3Ch]
  unsigned int v12; // [esp+0h] [ebp-30h]
  unsigned int v13; // [esp+0h] [ebp-30h]
  unsigned int v14; // [esp+4h] [ebp-2Ch]
  unsigned int *v15; // [esp+4h] [ebp-2Ch]
  unsigned int v17; // [esp+14h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  v1 = (_WORD *)*((_DWORD *)this + 13);
  if ( v1 )
  {
    v2 = 0;
    v17 = 0;
    ms_exc.registration.TryLevel = 0;
    for ( i = (ULONG)v1; ; i = (ULONG)&v1[3 * v17] )
    {
      Win32ProbeForRead(6, i, (void *)2, v12, v14);
      v4 = 3 * v2;
      if ( !v1[3 * v2] && !v1[v4 + 1] && !v1[v4 + 2] )
        break;
      if ( (ULongAdd(1, v2, (int *)&v17, v13, v15) & 0x80000000) != 0 )
        return;
      v2 = v17;
    }
    ms_exc.registration.TryLevel = -2;
    v17 = 0;
    if ( (ULongAdd(1, v2, (int *)&v17, v13, v15) & 0x80000000) == 0 )
    {
      v5 = 6 * v17;
      if ( is_mul_ok(6u, v17) )
      {
        v6 = 0;
      }
      else
      {
        v6 = -2147024362;
        v5 = -1;
      }
      if ( v6 >= 0 )
      {
        v11 = v5;
        v10 = v1;
        v7 = (int *)*((_DWORD *)this + 10);
        v8 = (**(int (__thiscall ***)(QueryFontTreeRequest *))this)(this);
        v9 = UmfdAllocation::ObtainKernelmodeAllocation(
               v8,
               *v7,
               v10,
               v11,
               0,
               (int)UmfdAllocation::TryBufferHasSameContent);
        if ( v9 )
        {
          *(_DWORD *)&v9[v4 * 2] = 0;
          *(_WORD *)&v9[v4 * 2 + 4] = 0;
          *((_DWORD *)this + 11) = v9;
        }
      }
    }
  }
}
