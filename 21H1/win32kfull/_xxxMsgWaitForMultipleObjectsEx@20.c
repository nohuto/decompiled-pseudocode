/*
 * XREFs of _xxxMsgWaitForMultipleObjectsEx@20 @ 0xEFE84
 * Callers:
 *     _NtUserMsgWaitForMultipleObjectsEx@20 @ 0x82980 (_NtUserMsgWaitForMultipleObjectsEx@20.c)
 * Callees:
 *     _xxxRemoveQueueCompletion@0 @ 0x6ECD4 (_xxxRemoveQueueCompletion@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __fastcall xxxMsgWaitForMultipleObjectsEx(int a1, int a2, unsigned int a3, char a4, char a5)
{
  int v5; // esi
  bool v6; // bl
  int *v7; // edi
  int v8; // eax
  NTSTATUS v9; // esi
  struct _NT_TIB *v11; // eax
  int v12; // [esp+Ch] [ebp-2Ch] BYREF
  int v13; // [esp+10h] [ebp-28h]
  int v14; // [esp+14h] [ebp-24h]
  int v15; // [esp+18h] [ebp-20h]
  int v16; // [esp+1Ch] [ebp-1Ch]
  int v17; // [esp+20h] [ebp-18h]
  BOOL v18; // [esp+24h] [ebp-14h]
  int v19; // [esp+28h] [ebp-10h]
  int v20; // [esp+2Ch] [ebp-Ch]
  int v21; // [esp+30h] [ebp-8h]
  int v22; // [esp+34h] [ebp-4h]

  v14 = _gptiCurrent;
  v17 = a2;
  v5 = a5 & 1;
  v22 = 1;
  v15 = a1;
  v12 = 0;
  v13 = 0;
  v18 = !(a5 & 1);
  v6 = 0;
  LOBYTE(v21) = 0;
  v7 = 0;
  v20 = 0;
  v19 = v5;
  v16 = a1 + 1;
  while ( 1 )
  {
    UserSessionSwitchLeaveCrit();
    if ( v22 )
    {
      if ( a3 == -1 )
      {
        v7 = 0;
      }
      else
      {
        v7 = &v12;
        v12 = -10000 * a3;
        v13 = (unsigned __int64)-__SPAIR64__((10000 * (unsigned __int64)a3) >> 32, -10000 * a3) >> 32;
      }
      v6 = (a5 & 2) != 0;
      v22 = 0;
      LOBYTE(v21) = v6;
      v20 = v5;
    }
    do
    {
      v8 = ObWaitForMultipleObjects(v16, v17, 1, v18, 1, v21, v7);
      v9 = v8;
    }
    while ( v8 >= 0 && v6 && v8 == 257 );
    EnterCrit(0, 1);
    if ( v20
      || v9 != v15
      || !xxxRemoveQueueCompletion()
      || (*(_WORD *)(*(_DWORD *)(v14 + 244) + 6) & 8) != 0 && (a4 & 8) != 0 )
    {
      break;
    }
    v5 = v19;
  }
  if ( v9 >= 0 )
    return v9;
  v11 = (struct _NT_TIB *)RtlNtStatusToDosError(v9);
  UserSetLastError(v11);
  return -1;
}
