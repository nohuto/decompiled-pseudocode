/*
 * XREFs of ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C00939F0
 * Callers:
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C00299B0 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     bDeleteDCInternalEx @ 0x1C0093960 (bDeleteDCInternalEx.c)
 * Callees:
 *     ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x1C0026DF8 (-HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C002903C (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002BD30 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C0049420 (EngSetLastError.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C007FA1C (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0089A90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C01430B0 (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 */

__int64 __fastcall bDeleteDCOBJ(struct HOBJ__ ***this, unsigned int *a2, int *a3)
{
  int v3; // esi
  struct HOBJ__ **v5; // rcx
  unsigned int *v6; // rax
  unsigned int v7; // ebx
  int v8; // eax
  ULONG v9; // ecx
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v13; // rdx
  int v14; // r8d
  char v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v5 = *this;
  if ( a2 )
  {
    *((_DWORD *)v5 + 9) |= *a2 & 0x1C00000;
    v6 = a2;
    v5 = *this;
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
  if ( !a2 && !(unsigned int)HmgQueryRemoveAttempted(**this, 0) )
  {
    v9 = 5023;
LABEL_11:
    EngSetLastError(v9);
    return 0LL;
  }
  if ( *((_WORD *)*this + 6) > 1u && (v7 & 0x1C00000) == 0 )
  {
    v9 = 170;
    goto LABEL_11;
  }
  if ( v3 )
  {
    XDCOBJ::bCleanDC((DC **)this);
  }
  else
  {
    NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
      (NEEDDYNAMICMODECHANGESHARELOCK *)&v15,
      ((*((_DWORD *)(*this)[6] + 10) >> 7) & 1) == 0,
      (int)a3);
    if ( !HmgLockObjectForRemoval(**this) )
    {
      EngSetLastError(0xAAu);
      NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v15, v11, v12);
      return 0LL;
    }
    XDCOBJ::bCleanDC((DC **)this);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v15, v13, v14);
    vDeleteDCInternalWorker((struct DC **)this, (v7 >> 23) & 1);
  }
  return 1LL;
}
