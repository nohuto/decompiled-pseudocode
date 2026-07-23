/*
 * XREFs of CcMapAndRead @ 0x14022F880
 * Callers:
 *     CcPinFileData @ 0x14022DAD0 (CcPinFileData.c)
 *     CcPrepareMdlWrite @ 0x14035A640 (CcPrepareMdlWrite.c)
 *     CcMapData @ 0x1405FCDD0 (CcMapData.c)
 * Callees:
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 */

__int64 __fastcall CcMapAndRead(unsigned int a1, int a2, char a3, __int64 a4)
{
  unsigned __int8 v4; // bp
  int v5; // r11d
  struct _KTHREAD *CurrentThread; // rsi
  int v8; // edx
  int v9; // eax
  NTSTATUS v10; // r10d
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbx
  unsigned int v13; // edi
  unsigned int v14; // r8d
  int v15; // r15d
  int v16; // eax
  bool v17; // zf
  int v19; // eax
  char v20; // [rsp+60h] [rbp+8h] BYREF
  char v21; // [rsp+70h] [rbp+18h]
  int v22; // [rsp+78h] [rbp+20h]

  v21 = a3;
  v4 = 0;
  v5 = 1;
  CurrentThread = KeGetCurrentThread();
  v8 = 2;
  v20 = 1;
  v9 = BYTE4(CurrentThread[1].Queue);
  v10 = 0;
  if ( a3 )
    v8 = 0;
  v22 = v8;
  v11 = a4 & 0xFFFFFFFFFFFFF000uLL;
  v12 = ((a4 & 0xFFF) + (unsigned __int64)a1 + 4095) >> 12;
  v13 = v9 + 4 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  if ( (_DWORD)v12 )
  {
    while ( 1 )
    {
      BYTE4(CurrentThread[1].Queue) = 1;
      if ( (unsigned int)(v12 - 1) > LODWORD(CurrentThread[1].WaitListEntry.Flink) )
      {
        v19 = v12 - 1;
        if ( (unsigned int)(v12 - 1) > 0xF )
          v19 = 15;
        LODWORD(CurrentThread[1].WaitListEntry.Flink) = v19;
      }
      v14 = 0;
      if ( a2 )
      {
        v15 = 1;
        if ( v5 == 2 )
          v15 = v12 - 1;
      }
      else
      {
        v15 = v12;
      }
      LOBYTE(v14) = (v5 & a2) != 0;
      v16 = MmCheckCachedPageStates(v11, (unsigned int)(v15 << 12), v8 | v14, &v20);
      v10 = v16;
      if ( !v20 && !v21 )
        break;
      if ( v16 < 0 )
        break;
      v8 = v22;
      v11 += (unsigned int)(v15 << 12);
      LODWORD(v12) = v12 - v15;
      v5 = 4;
      if ( (_DWORD)v12 != 1 )
        v5 = 2;
      if ( !(_DWORD)v12 )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    v4 = 1;
  }
  v17 = v21 == 0;
  LODWORD(CurrentThread[1].WaitListEntry.Flink) = v13 >> 2;
  BYTE4(CurrentThread[1].Queue) = v13 & 3;
  if ( !v17 && v10 < 0 )
    RtlRaiseStatus(v10);
  return v4;
}
