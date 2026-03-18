/*
 * XREFs of EtwpTraceThreadRundown @ 0x1403A65C0
 * Callers:
 *     EtwpThreadRundownApc @ 0x1405A63A0 (EtwpThreadRundownApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405A63DC (EtwpTraceThreadRundownWithStack.c)
 *     EtwpThreadEnumCallback @ 0x14077FF90 (EtwpThreadEnumCallback.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x1402B8E40 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1402B8E80 (PsGetIoPriorityThread.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403A68BC (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceThreadRundown(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v3; // r14
  char v4; // r15
  int v5; // ebx
  __int16 v6; // di
  __int64 v7; // r11
  __int64 v8; // r10
  int v9; // r8d
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // rcx
  __int64 v13; // rax
  __int16 v14; // ax
  unsigned __int16 *v15; // rax
  char v17; // cl
  __int64 *v18; // rcx
  unsigned int v19; // edx
  unsigned __int64 v20; // rax
  _DWORD v22[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+68h] [rbp-A0h]
  __int64 v24; // [rsp+70h] [rbp-98h]
  __int64 v25; // [rsp+78h] [rbp-90h]
  __int64 v26; // [rsp+80h] [rbp-88h]
  __int64 v27; // [rsp+88h] [rbp-80h]
  __int64 v28; // [rsp+90h] [rbp-78h]
  __int64 v29; // [rsp+98h] [rbp-70h]
  int v30; // [rsp+A0h] [rbp-68h]
  char v31; // [rsp+A4h] [rbp-64h]
  char PagePriorityThread; // [rsp+A5h] [rbp-63h]
  char IoPriorityThread; // [rsp+A6h] [rbp-62h]
  char v34; // [rsp+A7h] [rbp-61h]
  __int64 v35; // [rsp+A8h] [rbp-60h]
  _QWORD v36[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 *v37; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v38; // [rsp+C8h] [rbp-40h]
  __int64 *v39; // [rsp+D0h] [rbp-38h]
  __int64 v40; // [rsp+D8h] [rbp-30h]

  v2 = 2;
  v35 = 0LL;
  v3 = *(_QWORD *)(a2 + 32);
  v4 = *(_BYTE *)(a2 + 65);
  v5 = *(_DWORD *)(a2 + 40);
  v6 = 1284 - (*(_BYTE *)(a2 + 64) != 0);
  if ( (struct _KTHREAD *)a1 != KeGetCurrentThread() )
    v5 &= 0xFFFFE7FF;
  v22[0] = *(_DWORD *)(a1 + 1144);
  v22[1] = *(_DWORD *)(a1 + 1152);
  v23 = *(_QWORD *)(a1 + 56);
  v24 = *(_QWORD *)(a1 + 48);
  v27 = *(_QWORD *)(a1 + 576);
  v28 = *(_QWORD *)(a1 + 1232);
  v7 = *(_QWORD *)(a1 + 240);
  v25 = 0LL;
  v26 = 0LL;
  v29 = v7;
  v30 = 0;
  v31 = *(_BYTE *)(a1 + 563);
  PagePriorityThread = PsGetPagePriorityThread(a1);
  IoPriorityThread = PsGetIoPriorityThread(v8);
  v34 = v9;
  if ( (*(_BYTE *)(v10 + 1304) & 8) != 0 )
  {
    v17 = v34;
    if ( *(_QWORD *)(v10 + 1096) != v10 + 1096 )
      v17 = 1;
    v34 = v17;
  }
  if ( v11 && v4 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(v10 + 544) + 1408LL);
    if ( v12 && ((v14 = *(_WORD *)(v12 + 8), v14 == 332) || v14 == 452) )
    {
      v30 = *(_DWORD *)(v11 + 12128);
      v25 = *(unsigned int *)(v11 + 8196);
      v13 = *(unsigned int *)(v11 + 8200);
    }
    else
    {
      v30 = *(_DWORD *)(v11 + 5920);
      v25 = *(_QWORD *)(v11 + 8);
      v13 = *(_QWORD *)(v11 + 16);
    }
    v26 = v13;
  }
  v36[0] = v22;
  v36[1] = 72LL;
  v15 = *(unsigned __int16 **)(v10 + 1552);
  if ( v15 && (v18 = (__int64 *)*((_QWORD *)v15 + 1)) != 0LL )
  {
    v19 = *v15;
    v20 = 2048LL;
    if ( (unsigned __int16)v19 < 0x800u )
      v20 = v19;
    v37 = v18;
    v38 = __PAIR64__(v9, v20);
    if ( !(_DWORD)v20 || *((_WORD *)v18 + (v20 >> 1) - 1) != (_WORD)v9 )
    {
      v39 = &EtwpNull;
      v40 = 2LL;
      v2 = 3;
    }
  }
  else
  {
    v37 = &EtwpNull;
    v38 = 2LL;
  }
  return EtwpLogSystemEventUnsafe(
           *(_QWORD *)(v3 + 1112),
           (unsigned int)v36,
           v10,
           *(_DWORD *)v3,
           v2,
           v6,
           v5,
           v9,
           v6,
           2,
           v3,
           a1);
}
