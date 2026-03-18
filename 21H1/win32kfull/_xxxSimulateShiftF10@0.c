/*
 * XREFs of _xxxSimulateShiftF10@0 @ 0x1465FC
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     <none>
 */

int __stdcall xxxSimulateShiftF10()
{
  int v0; // ebx
  int v1; // eax
  int v2; // edi
  unsigned int v3; // edx
  int v4; // ecx
  int v5; // eax
  int v6; // edi
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // edi
  unsigned int v11; // edx
  int v12; // ebx
  int v13; // eax
  int v14; // edi
  unsigned int v15; // edx

  v0 = MEMORY[0xFFDF0004];
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v2 = MEMORY[0xFFDF0324];
    v3 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v2 = MEMORY[0xFFDF0324];
        v3 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v0 = MEMORY[0xFFDF0004];
    }
    v1 = v0 * (v2 << 8) + (((unsigned int)v0 * (unsigned __int64)v3) >> 24);
  }
  else
  {
    v1 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  xxxKeyEvent(160, 554, v1, 0, 0, 0, 0, 0);
  v4 = MEMORY[0xFFDF0004];
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v6 = MEMORY[0xFFDF0324];
    v7 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v6 = MEMORY[0xFFDF0324];
        v7 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v4 = MEMORY[0xFFDF0004];
    }
    v5 = v4 * (v6 << 8) + (((unsigned int)v4 * (unsigned __int64)v7) >> 24);
  }
  else
  {
    v5 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  xxxKeyEvent(121, 580, v5, 0, 0, 0, 0, 0);
  v8 = MEMORY[0xFFDF0004];
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v10 = MEMORY[0xFFDF0324];
    v11 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v10 = MEMORY[0xFFDF0324];
        v11 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v8 = MEMORY[0xFFDF0004];
    }
    v9 = v8 * (v10 << 8) + (((unsigned int)v8 * (unsigned __int64)v11) >> 24);
  }
  else
  {
    v9 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  xxxKeyEvent(32889, 580, v9, 0, 0, 0, 0, 0);
  v12 = MEMORY[0xFFDF0004];
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v14 = MEMORY[0xFFDF0324];
    v15 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v14 = MEMORY[0xFFDF0324];
        v15 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v12 = MEMORY[0xFFDF0004];
    }
    v13 = v12 * (v14 << 8) + (((unsigned int)v12 * (unsigned __int64)v15) >> 24);
  }
  else
  {
    v13 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  return xxxKeyEvent(32928, 554, v13, 0, 0, 0, 0, 0);
}
