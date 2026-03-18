/*
 * XREFs of ?PointerEventIntToDigitizerContactInfo@Feedback@@YGXPBUtagPOINTEREVENTINT@@HHHPAUtagDIGITIZER_CONTACT_INFO@@@Z @ 0x148985
 * Callers:
 *     ?ContactVisualizationWorker@@YGHKPAXKHK@Z @ 0x14834D (-ContactVisualizationWorker@@YGHKPAXKHK@Z.c)
 * Callees:
 *     <none>
 */

void __userpurge Feedback::PointerEventIntToDigitizerContactInfo(
        int a1@<edx>,
        int a2@<ecx>,
        Feedback *this,
        const struct tagPOINTEREVENTINT *a4,
        int a5,
        int a6,
        int a7,
        struct tagDIGITIZER_CONTACT_INFO *a8)
{
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // eax

  *(_DWORD *)a5 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a5 + 4) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a5 + 8) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a5 + 12) = _gZero;
  *(struct tagSIZE **)(a5 + 16) = (struct tagSIZE *)_gZero->cy;
  *(struct tagSIZE **)(a5 + 20) = *(&_gZero + 2);
  *(struct tagSIZE **)(a5 + 24) = *(&_gZero + 3);
  v8 = 0;
  *(_DWORD *)(a5 + 36) = 0;
  if ( a1 )
  {
    v8 = 128;
    *(_DWORD *)(a5 + 36) = 128;
  }
  v9 = *(_DWORD *)(a2 + 8);
  if ( v9 == 2 )
  {
    *(_DWORD *)(a5 + 28) = 1;
    if ( (*(_BYTE *)(a2 + 96) & 1) != 0 )
    {
      *(_DWORD *)(a5 + 12) = *(_DWORD *)(a2 + 104);
      *(_DWORD *)(a5 + 16) = *(_DWORD *)(a2 + 108);
      *(_DWORD *)(a5 + 20) = *(_DWORD *)(a2 + 112);
      *(_DWORD *)(a5 + 24) = *(_DWORD *)(a2 + 116);
    }
  }
  else if ( v9 == 3 )
  {
    v10 = v8;
    *(_DWORD *)(a5 + 28) = 2;
    if ( this && (*(_BYTE *)(a2 + 96) & 1) != 0 )
    {
      v10 = v8 | 0x20;
      *(_DWORD *)(a5 + 36) = v8 | 0x20;
    }
    if ( (*(_BYTE *)(a2 + 96) & 4) != 0 )
      *(_DWORD *)(a5 + 36) = v10 | 0x40;
  }
  if ( (*(_DWORD *)(a2 + 20) & 4) != 0 )
    v11 = (a4 != 0) + 2;
  else
    v11 = ~*(_BYTE *)(a2 + 20) & 2 | 1;
  *(_DWORD *)(a5 + 32) = v11;
  if ( (_GetAsyncKeyState(16) & 0x8000u) != 0 )
    *(_DWORD *)(a5 + 36) |= 1u;
  if ( (_GetAsyncKeyState(17) & 0x8000u) != 0 )
    *(_DWORD *)(a5 + 36) |= 2u;
  if ( (_GetAsyncKeyState(164) & 0x8000u) != 0 )
    *(_DWORD *)(a5 + 36) |= 4u;
  if ( (_GetAsyncKeyState(165) & 0x8000u) != 0 )
    *(_DWORD *)(a5 + 36) |= 0x10u;
  if ( (_GetAsyncKeyState(91) & 0x8000u) != 0 || (_GetAsyncKeyState(92) & 0x8000u) != 0 )
    *(_DWORD *)(a5 + 36) |= 8u;
}
