/*
 * XREFs of _FreeProcessHidTable@4 @ 0xD2C18
 * Callers:
 *     _DestroyProcessHidRequests@4 @ 0xD2C06 (_DestroyProcessHidRequests@4.c)
 * Callees:
 *     _FreeHidProcessRequest@12 @ 0xD2AF8 (_FreeHidProcessRequest@12.c)
 */

void __thiscall FreeProcessHidTable(_DWORD *this)
{
  int **v1; // edi
  int **v2; // ebx
  int **i; // esi
  int **j; // esi
  int *v5; // eax
  int ***v6; // ecx
  int v7; // [esp+Ch] [ebp-4h]

  v1 = (int **)this[118];
  this[118] = 0;
  v7 = 0;
  v2 = v1 + 2;
  if ( *v2 != (int *)v2 || v1[4] != (int *)(v1 + 4) || v1[6] != (int *)(v1 + 6) || (this[116] & 0x8000000) != 0 )
    v7 = 1;
  HMAssignmentUnlock(v1 + 9);
  HMAssignmentUnlock(v1 + 8);
  while ( *v2 != (int *)v2 )
    FreeHidProcessRequest(*v2, 1, (int)v1);
  for ( i = v1 + 4; *i != (int *)i; FreeHidProcessRequest(*i, 2, (int)v1) )
    ;
  for ( j = v1 + 6; *j != (int *)j; FreeHidProcessRequest(*j, 3, (int)v1) )
    ;
  v5 = *v1;
  if ( (int **)(*v1)[1] != v1 || (v6 = (int ***)v1[1], *v6 != v1) )
    __fastfail(3u);
  *v6 = (int **)v5;
  v5[1] = (int)v6;
  Win32FreePool(v1);
  --gnHidProcess;
  if ( v7 )
    CHidInput::HandleDirectStartStopDeviceReadRequest(_gpHidInput);
}
