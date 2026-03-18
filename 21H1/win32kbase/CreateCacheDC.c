/*
 * XREFs of CreateCacheDC @ 0x1C00A8290
 * Callers:
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C00908A8 (GetMonitorDC.c)
 *     InitUserScreen @ 0x1C00A7A88 (InitUserScreen.c)
 * Callees:
 *     GreGetBounds @ 0x1C00811F0 (GreGetBounds.c)
 *     GreSetDCOwnerEx @ 0x1C0089500 (GreSetDCOwnerEx.c)
 *     GreCreateDisplayDC @ 0x1C008A9B0 (GreCreateDisplayDC.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     IsGetStyleWindowSupported @ 0x1C00A84B8 (IsGetStyleWindowSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateCacheDC(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 DisplayDC; // rbp
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // eax
  int v13; // esi
  int v15; // eax
  __int64 v16; // rdx

  v6 = Win32AllocPool(96LL, 0x63647355u);
  if ( !v6 )
    return 0LL;
  if ( a3 )
    v7 = *(_QWORD *)(a3 + 232);
  else
    v7 = *(_QWORD *)(gpDispInfo + 40);
  DisplayDC = GreCreateDisplayDC(v7, 0, 2);
  if ( !DisplayDC )
  {
    Win32FreePool(v6, v8, v10);
    return 0LL;
  }
  if ( (a2 & 0x4000) != 0 )
  {
    if ( (int)IsGetStyleWindowSupported() >= 0 && qword_1C0258570 )
      v11 = qword_1C0258570(a1, 2848LL);
    else
      v11 = 0LL;
    v12 = a2 & 0xFFFFBFFF;
    if ( v11 )
      v12 = a2;
    a2 = v12;
  }
  else
  {
    v11 = 0LL;
  }
  *(_QWORD *)v6 = *(_QWORD *)(gpDispInfo + 24);
  *(_QWORD *)(gpDispInfo + 24) = v6;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_QWORD *)(v6 + 48) = 0LL;
  *(_QWORD *)(v6 + 56) = 0LL;
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 88) = a3;
  v13 = -1073741637;
  *(_QWORD *)(v6 + 8) = DisplayDC;
  *(_DWORD *)(v6 + 64) = a2;
  *(_QWORD *)(v6 + 16) = a1;
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = v11;
  if ( (a2 & 0x8000) != 0 )
  {
    GreSetDCOwnerEx(DisplayDC, 0x80000002, 0, 0);
    *(_QWORD *)(v6 + 72) = gptiCurrent;
    *(_QWORD *)(a1 + 248) = v6;
    if ( (a2 & 0x4000) != 0 )
    {
      v15 = qword_1C02585B8 ? qword_1C02585B8() : -1073741637;
      if ( v15 >= 0 && qword_1C02585C0 )
        qword_1C02585C0(v6, 0LL);
    }
  }
  else
  {
    GreSetDCOwnerEx(DisplayDC, 0x80000012, 0, 0);
    *(_QWORD *)(v6 + 72) = 0LL;
    ++gnDCECount;
  }
  if ( (a2 & 2) == 0 )
  {
    v16 = *(_QWORD *)(a1 + 136);
    if ( (*(_BYTE *)(*(_QWORD *)(v16 + 8) + 8LL) & 0x40) != 0 )
      *(_QWORD *)(v16 + 40) = v6;
    *(_DWORD *)(v6 + 64) |= 0x1000u;
    if ( qword_1C02585A8 )
      v13 = qword_1C02585A8();
    if ( v13 >= 0 && qword_1C02585B0 )
      qword_1C02585B0(v6);
  }
  if ( *(_QWORD *)(gpDispInfo + 32) )
    GreGetBounds(*(_QWORD *)(v6 + 8), 0LL, 1);
  return *(_QWORD *)(v6 + 8);
}
