/*
 * XREFs of ?ValidatePlaneHelper@MOCKDRIVERSTATE@@AEAAXPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@@Z @ 0x1C004C6E8
 * Callers:
 *     ?ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4MOCKDRIVERSTATE_VALIDATE_TYPE@@PEAX@Z @ 0x1C000D52C (-ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4MOCKDRIVERSTATE_VALIDATE_TYPE@@PEAX@Z.c)
 *     ?DXGADAPTER_ValidateMockDriverState@@YAXPEAVDXGADAPTER@@W4MOCKDRIVERSTATE_VALIDATE_TYPE@@PEAX@Z @ 0x1C00406C0 (-DXGADAPTER_ValidateMockDriverState@@YAXPEAVDXGADAPTER@@W4MOCKDRIVERSTATE_VALIDATE_TYPE@@PEAX@Z.c)
 * Callees:
 *     ?QueuePlaneViolationWorkItem@@YAXIIPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MOCKDRIVERSTATE_PLANE@@@Z @ 0x1C004C5B0 (-QueuePlaneViolationWorkItem@@YAXIIPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MOC.c)
 */

void __fastcall MOCKDRIVERSTATE::ValidatePlaneHelper(MOCKDRIVERSTATE *this, struct _MOCKDRIVERSTATE_VALIDATE_PLANE *a2)
{
  struct DXGADAPTER *v2; // r10
  int v5; // eax
  unsigned int v6; // r15d
  unsigned int v7; // r12d
  __int64 v8; // rdi
  __int64 v9; // r11
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned int v15; // r11d
  _QWORD *v16; // rcx

  v2 = (struct DXGADAPTER *)*((_QWORD *)this + 340);
  v5 = *((_DWORD *)v2 + 643);
  if ( v5 < 2200 )
    return;
  if ( *((_BYTE *)this + 2568) )
    return;
  v6 = *((_DWORD *)v2 + 356);
  v7 = *((_DWORD *)v2 + 628);
  v8 = 0LL;
  if ( !*(_DWORD *)a2 )
    return;
  while ( *((_BYTE *)a2 + 16) )
  {
    v9 = *(unsigned int *)(*((_QWORD *)a2 + 3) + 4 * v8);
    v10 = *(unsigned int *)(*((_QWORD *)a2 + 4) + 4 * v8);
    v11 = *((_QWORD *)this + 20 * v9 + 2 * v10);
    if ( v11 && *(_QWORD *)(*((_QWORD *)a2 + 1) + 8 * v8) == v11 )
    {
      v12 = (unsigned int)v10;
      v13 = (unsigned int)v9;
      goto LABEL_18;
    }
LABEL_15:
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= *(_DWORD *)a2 )
      return;
  }
  v14 = 0LL;
  if ( !v6 )
    goto LABEL_15;
  while ( 1 )
  {
    v15 = v5 == 2200;
    if ( v15 < v7 )
      break;
LABEL_14:
    v14 = (unsigned int)(v14 + 1);
    if ( (unsigned int)v14 >= v6 )
      goto LABEL_15;
  }
  v16 = (_QWORD *)((char *)this + 160 * v14 + 16 * (v5 == 2200));
  while ( !*v16 || *(_QWORD *)(*((_QWORD *)a2 + 1) + 8 * v8) != *v16 )
  {
    ++v15;
    v16 += 2;
    if ( v15 >= v7 )
      goto LABEL_14;
  }
  v12 = v15;
  v13 = (unsigned int)v14;
LABEL_18:
  QueuePlaneViolationWorkItem(v13, v12, a2, v2, this);
}
