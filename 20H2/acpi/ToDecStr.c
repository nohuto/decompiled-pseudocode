/*
 * XREFs of ToDecStr @ 0x1C006A6C0
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0008A70 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C0009B90 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C000A8A0 (WriteObject.c)
 *     ValidateTarget @ 0x1C000AEA4 (ValidateTarget.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 *     ConPrintf @ 0x1C0065BD0 (ConPrintf.c)
 */

__int64 __fastcall ToDecStr(struct _SLIST_ENTRY *a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v7; // ecx
  unsigned int v8; // eax
  __int64 v9; // rdi
  _BYTE *v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r11d
  unsigned int j; // r9d
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // r9
  __int64 v20; // rbp
  __int64 v21; // r15
  __int64 v22; // r12
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // r8
  __int64 i; // r9
  char v28; // al
  __int64 v30; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 80);
  v30 = 0LL;
  v5 = ValidateArgTypes((__int64)a1, v3, 0, "D");
  if ( !v5 )
  {
    v5 = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 40LL, 0x87u, (__int64)&v30);
    if ( !v5 )
    {
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 2;
      v6 = *(_QWORD *)(a2 + 80);
      switch ( *(_WORD *)(v6 + 2) )
      {
        case 1:
          v24 = *(_QWORD *)(v6 + 16);
          LODWORD(v9) = 0;
          do
          {
            v9 = (unsigned int)(v9 + 1);
            v24 /= 0xAuLL;
          }
          while ( v24 );
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v9 + 1;
          ConPrintf("qwDataValue = %I64x, length=%x, size=%x\n", 0LL, v9, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v25 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v25;
          if ( v25 )
          {
            v26 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL);
            for ( i = (int)v9 - 1; i >= 0; --i )
            {
              v28 = HTOALookupTable[v26 % 0xA];
              v26 /= 0xAuLL;
              *(_BYTE *)(i + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = v28;
            }
            goto LABEL_33;
          }
          break;
        case 2:
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *(_DWORD *)(v6 + 24);
          ConPrintf("size=%x\n", *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v23 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v23;
          if ( v23 )
          {
            memmove(
              *(void **)(*(_QWORD *)(a2 + 88) + 32LL),
              *(const void **)(*(_QWORD *)(a2 + 80) + 32LL),
              *(unsigned int *)(*(_QWORD *)(a2 + 88) + 24LL));
            return (unsigned int)WriteObject(a1, v30, *(_QWORD *)(a2 + 88));
          }
          break;
        case 3:
          v8 = *(_DWORD *)(v6 + 24);
          LODWORD(v9) = v8 - 1;
          if ( v8 )
          {
            v10 = *(_BYTE **)(v6 + 32);
            v11 = v8;
            do
            {
              if ( *v10 >= 0xAu )
                v12 = 3 - (*v10 < 0x64u);
              else
                v12 = 1;
              v9 = (unsigned int)(v12 + v9);
              ++v10;
              --v11;
            }
            while ( v11 );
          }
          else
          {
            v9 = 0LL;
          }
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v9 + 1;
          ConPrintf("length=%x,size=%x\n", v9, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v13 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v13;
          if ( v13 )
          {
            v14 = *(_QWORD *)(a2 + 80);
            v15 = 0;
            for ( j = 0; v15 < *(_DWORD *)(v14 + 24); v14 = *(_QWORD *)(a2 + 80) )
            {
              v17 = *(_QWORD *)(a2 + 88);
              v18 = j;
              v19 = j + 1;
              v20 = *(unsigned __int8 *)(v15 + *(_QWORD *)(v14 + 32));
              if ( (unsigned __int8)v20 >= 0xAu )
              {
                v21 = *(_QWORD *)(v17 + 32);
                v22 = (int)((unsigned int)v20 / 0xA) % 10;
                if ( (unsigned __int8)v20 >= 0x64u )
                {
                  *(_BYTE *)(v18 + v21) = HTOALookupTable[(int)((unsigned int)v20 / 0x64) % 10];
                  *(_BYTE *)(v19 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v22];
                  v19 = (unsigned int)(v19 + 1);
                }
                else
                {
                  *(_BYTE *)(v18 + v21) = HTOALookupTable[v22];
                }
                *(_BYTE *)(v19 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[(unsigned int)v20 % 0xA];
                v19 = (unsigned int)(v19 + 1);
              }
              else
              {
                *(_BYTE *)(v18 + *(_QWORD *)(v17 + 32)) = HTOALookupTable[v20];
              }
              ++v15;
              *(_BYTE *)(v19 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 44;
              j = v19 + 1;
            }
LABEL_33:
            *(_BYTE *)(v9 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 0;
            return (unsigned int)WriteObject(a1, v30, *(_QWORD *)(a2 + 88));
          }
          break;
        default:
          v5 = -1072431098;
          LogError(-1072431098);
          AcpiDiagTraceAmlError((__int64)a1, -1072431098);
          v7 = 186;
LABEL_30:
          PrintDebugMessage(v7, 0LL, 0LL, 0LL, 0LL);
          return v5;
      }
      v5 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError((__int64)a1, -1073741670);
      v7 = 185;
      goto LABEL_30;
    }
  }
  return v5;
}
