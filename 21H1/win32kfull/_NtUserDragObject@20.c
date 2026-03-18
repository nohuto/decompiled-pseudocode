/*
 * XREFs of _NtUserDragObject@20 @ 0x160D60
 * Callers:
 *     <none>
 * Callees:
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _xxxDragObject@20 @ 0x1A6347 (_xxxDragObject@20.c)
 */

int __stdcall NtUserDragObject(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // eax
  int v7; // ebx
  int v8; // edi
  int v10; // [esp+8h] [ebp-28h] BYREF
  int v11; // [esp+Ch] [ebp-24h]
  int v12; // [esp+10h] [ebp-20h]
  int v13; // [esp+14h] [ebp-1Ch] BYREF
  int v14; // [esp+18h] [ebp-18h]
  int v15; // [esp+1Ch] [ebp-14h]
  int v16; // [esp+20h] [ebp-10h] BYREF
  int v17; // [esp+24h] [ebp-Ch]
  int v18; // [esp+28h] [ebp-8h]
  int v19; // [esp+2Ch] [ebp-4h]

  v5 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  EnterCrit(0, 1);
  v6 = ValidateHwnd(a1);
  v19 = v6;
  if ( v6 )
  {
    v16 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v16;
    v17 = v6;
    HMLockObject(v6);
    if ( a2 )
    {
      v7 = ValidateHwnd(a2);
      if ( !v7 )
      {
LABEL_15:
        ThreadUnlock1();
        goto LABEL_16;
      }
    }
    else
    {
      v7 = 0;
    }
    if ( a5 )
    {
      v8 = HMValidateHandle(a5, 3);
      if ( !v8 )
        goto LABEL_15;
    }
    else
    {
      v8 = 0;
    }
    v13 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v13;
    v14 = v7;
    if ( v7 )
      HMLockObject(v7);
    v10 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v10;
    v11 = v8;
    if ( v8 )
      HMLockObject(v8);
    v5 = xxxDragObject(v19, v7, a3, a4, v8);
    ThreadUnlock1();
    ThreadUnlock1();
    goto LABEL_15;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit();
  return v5;
}
