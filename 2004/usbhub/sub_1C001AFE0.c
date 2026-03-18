/*
 * XREFs of sub_1C001AFE0 @ 0x1C001AFE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00109A0 @ 0x1C00109A0 (sub_1C00109A0.c)
 *     sub_1C0010E28 @ 0x1C0010E28 (sub_1C0010E28.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0013CDC @ 0x1C0013CDC (sub_1C0013CDC.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

__int64 __fastcall sub_1C001AFE0(ULONG_PTR a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v5; // rcx
  __int64 Options; // r11
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  ULONG v13; // edx
  _DWORD *v15; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( !a1 )
    goto LABEL_24;
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    sub_1C002DC78(a1, 0LL);
  if ( *(_DWORD *)v5 != 1329877064 )
    sub_1C002DC78(a1, v5);
  Options = CurrentStackLocation->Parameters.Create.Options;
  v7 = *(_QWORD *)(v5 + 1184);
  if ( (unsigned int)Options <= 1 )
  {
    if ( (dword_1C006B268 & 0x10) != 0 )
    {
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 64);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v8 + 888)
             + 32LL
             * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
          *(_DWORD *)v9 = 860767312;
          *(_QWORD *)(v9 + 8) = 0LL;
          *(_QWORD *)(v9 + 16) = CurrentStackLocation;
          *(_QWORD *)(v9 + 24) = a2;
        }
      }
    }
    *(_QWORD *)(v5 + 8 * Options + 800) = a2;
    *(_QWORD *)(v5 + 8 * Options + 816) = CurrentStackLocation;
    *(_DWORD *)(v5 + 4 * Options + 832) = 752;
  }
  v10 = *(_QWORD *)(v5 + 1184);
  if ( !v10 )
LABEL_24:
    sub_1C002DC78(0LL, 0LL);
  v11 = *(_QWORD *)(v10 + 64);
  if ( !v11 )
    sub_1C002DC78(*(_QWORD *)(v5 + 1184), 0LL);
  if ( *(_DWORD *)v11 != 541218120 )
    sub_1C002DC78(*(_QWORD *)(v5 + 1184), *(_QWORD *)(v10 + 64));
  if ( (dword_1C006B268 & 0x10) != 0 )
  {
    v12 = *(_QWORD *)(v11 + 888)
        + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
    *(_DWORD *)v12 = 1347642480;
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_QWORD *)(v12 + 16) = a1;
    *(_QWORD *)(v12 + 24) = a2;
  }
  v13 = CurrentStackLocation->Parameters.Create.Options;
  if ( !v13 )
    return sub_1C0010E28(*(_QWORD *)(v5 + 1184), a1, a2);
  if ( v13 == 1 )
    return sub_1C00109A0(*(_QWORD *)(v5 + 1184), a1, a2);
  v15 = sub_1C0011220(a1);
  sub_1C0013CDC(*((_QWORD *)v15 + 148), a1, a2, 767);
  a2->IoStatus.Status = -1073741637;
  IofCompleteRequest(a2, 0);
  return 3221225659LL;
}
