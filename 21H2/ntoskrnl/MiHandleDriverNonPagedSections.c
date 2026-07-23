/*
 * XREFs of MiHandleDriverNonPagedSections @ 0x14075CAD0
 * Callers:
 *     MiSessionRemoveImage @ 0x14038B148 (MiSessionRemoveImage.c)
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C9358 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockCode @ 0x14032E300 (MiLockCode.c)
 *     MiUnlockCodePage @ 0x1403A11A0 (MiUnlockCodePage.c)
 *     MiFindDriverNonPagedSections @ 0x14075CC44 (MiFindDriverNonPagedSections.c)
 *     MiDisablePagingOfDriver @ 0x14075F060 (MiDisablePagingOfDriver.c)
 *     MiSnapDriverRange @ 0x14075F108 (MiSnapDriverRange.c)
 */

__int64 __fastcall MiHandleDriverNonPagedSections(__int64 a1, char a2, int a3)
{
  unsigned __int64 v4; // rcx
  int v7; // esi
  char v8; // bl
  unsigned __int64 v9; // rdi
  char v10; // di
  int v11; // r12d
  unsigned __int64 v12; // r15
  int v13; // eax
  unsigned __int64 v14; // rbx
  int v16; // ebx
  unsigned __int64 v17[2]; // [rsp+30h] [rbp-10h] BYREF
  int v18; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp+48h] BYREF

  v19 = 0LL;
  v4 = *(_QWORD *)(a1 + 48);
  v17[0] = 0LL;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v4) )
    return 0LL;
  v7 = 0;
  v8 = 1;
  if ( a3 == 1 )
  {
    if ( (dword_140CFB174 & 1) == 0 && (a2 & 2) == 0 )
    {
      if ( (a2 & 1) == 0 )
        MiDisablePagingOfDriver(a1);
      v8 = !(a2 & 1) + 1;
      goto LABEL_8;
    }
    v10 = ((a2 & 1) == 0) + 1;
    v11 = 0;
    v12 = 0LL;
    while ( 1 )
    {
      v13 = MiSnapDriverRange(a1, v11, 8, 0, (__int64)&v19, (__int64)v17);
      v14 = v19;
      v11 = v13;
      if ( !v19 )
        goto LABEL_17;
      if ( v12 )
      {
        if ( v19 == v12 )
          return (unsigned int)v7;
        MiUnlockCodePage(v19, v17[0], 0);
LABEL_17:
        if ( !v11 )
          return (unsigned int)v7;
      }
      else
      {
        v7 = MiLockCode(a1, v19, v17[0], v10);
        if ( v7 >= 0 )
          goto LABEL_17;
        v11 = 0;
        v12 = v14;
      }
    }
  }
  if ( (dword_140CFB174 & 1) != 0 )
  {
    v16 = 0;
    do
    {
      v16 = MiSnapDriverRange(a1, v16, 8, 0, (__int64)&v19, (__int64)v17);
      if ( v19 )
        MiUnlockCodePage(v19, v17[0], 0);
    }
    while ( v16 );
    return 0LL;
  }
LABEL_8:
  v18 = 0;
  v9 = 0LL;
  while ( (int)MiFindDriverNonPagedSections(a1, &v18, &v19, v17) >= 0 )
  {
    if ( a3 == 1 )
    {
      v7 = MiLockCode(a1, v19, v17[0], v8);
      if ( v7 < 0 )
      {
        v9 = v19;
        a3 = 0;
        v18 = 0;
      }
    }
    else
    {
      if ( v19 == v9 )
        return (unsigned int)v7;
      MiUnlockCodePage(v19, v17[0], 0);
    }
  }
  return (unsigned int)v7;
}
