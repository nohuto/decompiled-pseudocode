/*
 * XREFs of ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C006F908
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006D280 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0020F48 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C006F798 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01D0B9C (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     SpbCheckRect @ 0x1C021B284 (SpbCheckRect.c)
 */

__int64 __fastcall BltValidInit(struct tagSMWP *a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // r14d
  int v4; // esi
  int v5; // edi
  int v6; // ebp
  __int64 v7; // r15
  __int64 v9; // rcx
  HRGN EmptyRgn; // rax

  v2 = *((_QWORD *)a1 + 5);
  v3 = 0;
  v4 = *((_DWORD *)a1 + 7);
  v5 = 0;
  while ( --v4 >= 0 )
  {
    *(_QWORD *)(v2 + 96) = 0LL;
    v6 = *(_DWORD *)(v2 + 32);
    if ( *(_QWORD *)v2 )
    {
      LOBYTE(a2) = 1;
      v7 = HMValidateHandleNoSecure(*(_QWORD *)v2, a2);
      if ( v7 && IsStillWindowC(*(_QWORD *)(v2 + 8), a2) )
      {
        a2 = gpDispInfo;
        if ( *(_QWORD *)(gpDispInfo + 32LL) && (v6 & 8) == 0 )
          SpbCheckRect((struct tagWND *)v7, (struct tagRECT *)(*(_QWORD *)(v7 + 40) + 88LL), 1u);
        ++v3;
        if ( (v6 & 0x18E7) != 0x1807 )
          v5 = 1;
        if ( (*(_DWORD *)(v2 + 32) & 8) == 0 )
        {
          v9 = gpsi;
          if ( !*(_DWORD *)(gpsi + 2220LL) )
            PreventInterMonitorBlts((struct tagCVR *)v2);
          *(_DWORD *)(v2 + 88) = 0;
          EmptyRgn = (HRGN)CreateEmptyRgn(v9);
          *(_QWORD *)(v2 + 96) = EmptyRgn;
          if ( !EmptyRgn || !(unsigned int)SwpCalcVisRgn((struct tagWND *)v7, EmptyRgn) )
            *(_DWORD *)(v2 + 88) = 2;
        }
      }
      else
      {
        *(_QWORD *)v2 = 0LL;
        *(_DWORD *)(v2 + 32) = 6159;
      }
    }
    v2 += 168LL;
  }
  return v3 & (unsigned int)-(v5 != 0);
}
