/*
 * XREFs of PiSwBusRelationAdd @ 0x14074E00C
 * Callers:
 *     PiSwProcessRemove @ 0x140732D98 (PiSwProcessRemove.c)
 *     PiSwIrpStartCreateWorker @ 0x14074DD78 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x140252BB0 (RtlInsertElementGenericTableAvl.c)
 *     PnpAllocatePWSTR @ 0x14062CF38 (PnpAllocatePWSTR.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwBusRelationAdd(const wchar_t *a1, __int64 a2)
{
  int v3; // eax
  PVOID v4; // rbx
  signed int v5; // edi
  __int64 v6; // rdx
  _WORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *inserted; // rax
  char *v10; // rcx
  char **v11; // rdx
  char *v12; // rax
  _OWORD Buffer[2]; // [rsp+20h] [rbp-20h] BYREF
  BOOLEAN NewElement; // [rsp+70h] [rbp+30h] BYREF
  PVOID P; // [rsp+78h] [rbp+38h] BYREF

  P = 0LL;
  NewElement = 0;
  memset(Buffer, 0, sizeof(Buffer));
  v3 = PnpAllocatePWSTR(a1, 0xC8uLL, 0x57706E50u, &P);
  v4 = P;
  v5 = v3;
  if ( v3 >= 0 )
  {
    v5 = 0;
    if ( P )
    {
      v6 = 0x7FFFLL;
      v7 = P;
      do
      {
        if ( !*v7 )
          break;
        ++v7;
        --v6;
      }
      while ( v6 );
      v8 = (0x7FFF - v6) & -(__int64)(v6 != 0);
      v5 = v6 == 0 ? 0xC000000D : 0;
      if ( v6 )
      {
        *((_QWORD *)&Buffer[0] + 1) = P;
        LOWORD(Buffer[0]) = 2 * v8;
        WORD1(Buffer[0]) = 2 * v8 + 2;
      }
    }
    if ( v5 >= 0 )
    {
      inserted = RtlInsertElementGenericTableAvl(&PiSwBusRelationsTable, Buffer, 0x20u, &NewElement);
      if ( inserted )
      {
        if ( NewElement )
        {
          v4 = 0LL;
          inserted[3] = inserted + 2;
          inserted[2] = inserted + 2;
          P = 0LL;
        }
      }
      else
      {
        v5 = -1073741670;
      }
      if ( v5 >= 0 )
      {
        *(_QWORD *)(a2 + 112) = inserted;
        v10 = (char *)(a2 + 96);
        v11 = (char **)inserted[3];
        v12 = (char *)(inserted + 2);
        if ( *v11 != v12 )
          __fastfail(3u);
        *(_QWORD *)v10 = v12;
        *(_QWORD *)(a2 + 104) = v11;
        *v11 = v10;
        *((_QWORD *)v12 + 1) = v10;
        _InterlockedIncrement((volatile signed __int32 *)a2);
        v4 = P;
      }
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x57706E50u);
  return (unsigned int)v5;
}
