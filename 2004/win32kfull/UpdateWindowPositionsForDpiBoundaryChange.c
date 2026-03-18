/*
 * XREFs of UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00515B4
 * Callers:
 *     UpdateMonitorForWindowAndChildren @ 0x1C0051470 (UpdateMonitorForWindowAndChildren.c)
 *     xxxInheritWindowMonitor @ 0x1C006B23C (xxxInheritWindowMonitor.c)
 * Callees:
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C005166C (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00516B0 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     IsChildWindowDpiBoundary @ 0x1C006F7CC (IsChildWindowDpiBoundary.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     OffsetChildren @ 0x1C00B04D4 (OffsetChildren.c)
 *     OffsetWindow @ 0x1C00B05C8 (OffsetWindow.c)
 */

void __fastcall UpdateWindowPositionsForDpiBoundaryChange(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rbx
  struct tagWND *v3; // rax
  struct tagWND *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // esi
  unsigned int v8; // ebp
  int v9; // [rsp+20h] [rbp-28h]
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  if ( a1 )
  {
    v2 = a1;
    do
    {
      LOBYTE(a2) = 1;
      v3 = (struct tagWND *)HMValidateHandleNoSecure(v2[1], a2);
      v4 = v3;
      if ( v3 && (*((_DWORD *)v2 + 6) || (unsigned int)IsChildWindowDpiBoundary(v3)) )
      {
        v5 = *((_QWORD *)v4 + 13);
        v10 = *(_OWORD *)(*(_QWORD *)(v5 + 40) + 104LL);
        LogicalToPhysicalInPlaceRectWithSubpixel(v5, &v10, 0LL);
        PhysicalToLogicalInPlaceRectWithSubpixel(v4, &v10, 0LL);
        v6 = *((_QWORD *)v4 + 5);
        v7 = DWORD1(v10) + *((_DWORD *)v2 + 5) - *(_DWORD *)(v6 + 92);
        v8 = v10 + *((_DWORD *)v2 + 4) - *(_DWORD *)(v6 + 88);
        if ( v8 || v7 )
        {
          OffsetWindow(v4, v8, v7);
          OffsetChildren(v4, v9);
        }
      }
      v2 = (__int64 *)*v2;
    }
    while ( v2 );
  }
}
