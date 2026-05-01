/*
 * XREFs of ?RmpActivityPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x180011F30
 * Callers:
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z @ 0x180012600 (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::RmpActivityPropertiesToResourceSetInfo(
        ExecutionModel *this,
        struct _HAM_ACTIVITY_PROPERTIES *a2,
        struct ExecutionModel::_ResourceSetInfo *a3)
{
  __int64 v3; // rax
  int v6; // ecx
  __int16 v7; // dx
  __int16 v8; // cx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // r9d
  __int16 v13; // ax
  __int16 v14; // cx
  __int16 v15; // cx
  __int16 v16; // ax
  __int16 v17; // cx
  struct _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-10h] BYREF

  v3 = *((_QWORD *)this + 40);
  if ( (v3 & 8) != 0 )
    *((_QWORD *)a2 + 8) = *((_QWORD *)this + 44);
  if ( (v3 & 4) != 0 )
    *((_QWORD *)a2 + 3) = *((_QWORD *)this + 43);
  if ( (v3 & 2) != 0 )
    *((_QWORD *)a2 + 7) = *((_QWORD *)this + 42);
  if ( (v3 & 1) != 0 )
    *((_QWORD *)a2 + 45) = *((_QWORD *)this + 41);
  v6 = *((_DWORD *)this + 92);
  if ( (v3 & 0x20) != 0 )
  {
    *((_DWORD *)a2 + 11) &= 0xFFFFFFFC;
    *((_DWORD *)a2 + 11) |= v6 & 3;
  }
  if ( (v3 & 0x40) != 0 )
  {
    *((_DWORD *)a2 + 11) &= ~8u;
    *((_DWORD *)a2 + 11) |= v6 & 8;
  }
  if ( (v3 & 0x80u) != 0LL )
    *((_DWORD *)a2 + 11) ^= (*((_DWORD *)a2 + 11) ^ *((_DWORD *)this + 92)) & 0x20;
  v7 = 0;
  v8 = 1;
  if ( (*((_BYTE *)this + 312) & 1) != 0 )
  {
    v9 = *((_DWORD *)this + 78);
    if ( v9 != 1 )
    {
      *((_DWORD *)a2 + 4) = v9;
      v10 = *((unsigned __int8 *)this + 315);
      if ( (_BYTE)v10 )
      {
        *((_DWORD *)a2 + 8) = v10;
        *((_DWORD *)a2 + 2) = v10;
        *((_DWORD *)a2 + 24) = v10;
        *((_DWORD *)a2 + 30) = v10;
        *((_DWORD *)a2 + 36) = v10;
        *((_DWORD *)a2 + 8) = *((unsigned __int8 *)this + 316);
      }
    }
  }
  v11 = *((_DWORD *)this + 74);
  if ( (v11 & 2) != 0 )
  {
    *((_QWORD *)a2 + 17) = *((_QWORD *)this + 35);
    *((_DWORD *)a2 + 32) = 2;
    v11 = *((_DWORD *)this + 74);
  }
  if ( (v11 & 4) != 0 )
  {
    *((_QWORD *)a2 + 14) = *((_QWORD *)this + 36);
    *((_DWORD *)a2 + 26) = 1;
  }
  v12 = *(_DWORD *)this & 0x200;
  if ( (*(_DWORD *)this & 0x10000) != 0 )
  {
    *((_BYTE *)a2 + 42) |= 0x20u;
    v13 = *((_WORD *)a2 + 20);
  }
  else
  {
    if ( v12 || (*(_DWORD *)this & 0x2000) == 0 )
      v8 = 0;
    v13 = v8 | *((_WORD *)a2 + 20) & 0xFFFE;
    *((_WORD *)a2 + 20) = v13;
  }
  v14 = 0;
  if ( !v12 )
    v14 = 2;
  v15 = v13 & 0xFFFD | v14 | 0x20;
  v16 = 0;
  *((_WORD *)a2 + 20) = v15;
  if ( (*(_DWORD *)this & 0x2000) == 0 )
    v16 = 8;
  v17 = v16 | v15 & 0xFFF7;
  *((_WORD *)a2 + 20) = v17;
  if ( (*(_DWORD *)this & 0x2000) == 0 )
    v7 = 16;
  *((_WORD *)a2 + 20) = v7 | v17 & 0xFFEF;
  RtlInitializeBitMap(&BitMapHeader, (PULONG)this + 96, 0x2Fu);
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0) )
    *((_DWORD *)a2 + 41) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 1u) )
    *((_DWORD *)a2 + 42) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 2u) )
    *((_DWORD *)a2 + 43) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 3u) )
    *((_DWORD *)a2 + 44) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 4u) )
    *((_DWORD *)a2 + 45) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 5u) )
    *((_DWORD *)a2 + 46) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 6u) )
    *((_DWORD *)a2 + 47) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 7u) )
    *((_DWORD *)a2 + 48) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 8u) )
    *((_DWORD *)a2 + 49) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 9u) )
    *((_DWORD *)a2 + 50) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0xAu) )
    *((_DWORD *)a2 + 51) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0xBu) )
    *((_DWORD *)a2 + 52) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0xCu) )
    *((_DWORD *)a2 + 53) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0xDu) )
    *((_DWORD *)a2 + 54) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0xEu) )
    *((_DWORD *)a2 + 55) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0xFu) )
    *((_DWORD *)a2 + 56) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x10u) )
    *((_DWORD *)a2 + 57) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x11u) )
    *((_DWORD *)a2 + 58) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x12u) )
    *((_DWORD *)a2 + 59) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x13u) )
    *((_DWORD *)a2 + 60) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x14u) )
    *((_DWORD *)a2 + 61) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x15u) )
    *((_DWORD *)a2 + 62) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x16u) )
    *((_DWORD *)a2 + 63) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x17u) )
    *((_DWORD *)a2 + 64) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x18u) )
    *((_DWORD *)a2 + 65) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x19u) )
    *((_DWORD *)a2 + 66) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x1Au) )
    *((_DWORD *)a2 + 67) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x1Bu) )
    *((_DWORD *)a2 + 68) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x1Cu) )
    *((_DWORD *)a2 + 69) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x1Du) )
    *((_DWORD *)a2 + 70) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x1Eu) )
    *((_DWORD *)a2 + 71) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x1Fu) )
    *((_DWORD *)a2 + 72) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x20u) )
    *((_DWORD *)a2 + 73) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x21u) )
    *((_DWORD *)a2 + 74) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x22u) )
    *((_DWORD *)a2 + 75) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x23u) )
    *((_DWORD *)a2 + 76) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x24u) )
    *((_DWORD *)a2 + 77) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x25u) )
    *((_DWORD *)a2 + 78) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x26u) )
    *((_DWORD *)a2 + 79) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x27u) )
    *((_DWORD *)a2 + 80) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x28u) )
    *((_DWORD *)a2 + 81) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x29u) )
    *((_DWORD *)a2 + 82) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x2Au) )
    *((_DWORD *)a2 + 83) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x2Bu) )
    *((_DWORD *)a2 + 84) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x2Cu) )
    *((_DWORD *)a2 + 85) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x2Du) )
    *((_DWORD *)a2 + 86) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x2Eu) )
    *((_DWORD *)a2 + 87) = 2;
}
