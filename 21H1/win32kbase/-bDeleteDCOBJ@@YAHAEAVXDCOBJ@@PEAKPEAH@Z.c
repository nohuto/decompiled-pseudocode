/*
 * XREFs of ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C006D360
 * Callers:
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C0019D00 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     bDeleteDCInternalEx @ 0x1C006D2D0 (bDeleteDCInternalEx.c)
 * Callees:
 *     ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x1C0017078 (-HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C0019388 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001B60C (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C003C4D0 (EngSetLastError.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00829C0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C008B734 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     ?Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled@@YAHXZ @ 0x1C00CEC5C (-Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled@@YAHXZ.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C0149400 (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 */

__int64 __fastcall bDeleteDCOBJ(struct HOBJ__ ***a1, unsigned int *a2, int *a3)
{
  int v3; // esi
  struct HOBJ__ **v5; // rcx
  unsigned int *v6; // rax
  unsigned int v7; // ebx
  int v8; // eax
  ULONG v9; // ecx
  int v11; // r8d
  __int64 v12; // rdx
  int v13; // r8d
  __int64 v14; // rdx
  int v15; // r8d
  char v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v5 = *a1;
  if ( a2 )
  {
    *((_DWORD *)v5 + 9) |= *a2 & 0x1C00000;
    v6 = a2;
    v5 = *a1;
  }
  else
  {
    v6 = (unsigned int *)v5 + 9;
  }
  v7 = *v6;
  v8 = *((_DWORD *)v5 + 9);
  if ( (v8 & 8) != 0 )
  {
    if ( (v7 & 0x400000) != 0 )
      *((_DWORD *)v5 + 9) = v8 & 0xFFFFFFF7;
    else
      v3 = 1;
  }
  *a3 = v3;
  if ( !a2 && !(unsigned int)HmgQueryRemoveAttempted(**a1, 0) )
  {
    v9 = 5023;
LABEL_11:
    EngSetLastError(v9);
    return 0LL;
  }
  if ( *((_WORD *)*a1 + 6) > 1u && (v7 & 0x1C00000) == 0 )
    goto LABEL_23;
  if ( !(unsigned int)Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled() )
  {
    if ( v3 || HmgLockObjectForRemoval(**a1) )
    {
      XDCOBJ::bCleanDC((XDCOBJ *)a1, HIBYTE(v7) & 1);
      if ( v3 )
        return 1LL;
LABEL_25:
      vDeleteDCInternalWorker((struct XDCOBJ *)a1, (v7 >> 23) & 1);
      return 1LL;
    }
LABEL_23:
    v9 = 170;
    goto LABEL_11;
  }
  if ( !v3 )
  {
    NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
      (NEEDDYNAMICMODECHANGESHARELOCK *)&v16,
      ((*((_DWORD *)(*a1)[6] + 10) >> 7) & 1) == 0,
      v11);
    if ( !HmgLockObjectForRemoval(**a1) )
    {
      EngSetLastError(0xAAu);
      NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v16, v12, v13);
      return 0LL;
    }
    XDCOBJ::bCleanDC((XDCOBJ *)a1, HIBYTE(v7) & 1);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v16, v14, v15);
    goto LABEL_25;
  }
  XDCOBJ::bCleanDC((XDCOBJ *)a1, HIBYTE(v7) & 1);
  return 1LL;
}
