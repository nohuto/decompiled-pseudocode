/*
 * XREFs of ?ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z @ 0x1405C1820
 * Callers:
 *     ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C1E28 (-WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1405C2938 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MBR_ENTRY::ComputeChs(MBR_ENTRY *this, struct _DISK_GEOMETRY *a2)
{
  DWORD v2; // edi
  _BYTE **v3; // rsi
  ULONG LowPart; // ebx
  unsigned int *v5; // r11
  int v7; // edx
  __int64 v8; // rbp
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // eax
  unsigned int v12; // r10d
  DWORD v13; // eax
  DWORD v14; // edx
  DWORD SectorsPerTrack; // r8d
  _BYTE *v16; // rdx
  _QWORD v17[3]; // [rsp+0h] [rbp-18h] BYREF
  int v18; // [rsp+20h] [rbp+8h] BYREF
  int v19; // [rsp+24h] [rbp+Ch]

  v2 = a2->SectorsPerTrack * a2->TracksPerCylinder;
  v3 = (_BYTE **)v17;
  LowPart = a2->Cylinders.LowPart;
  v5 = (unsigned int *)&v18;
  v17[0] = (char *)this + 1;
  v7 = *((_DWORD *)this + 2);
  v17[1] = (char *)this + 5;
  v8 = 2LL;
  v9 = *((_DWORD *)this + 3);
  v10 = v2 * LowPart;
  v18 = v7;
  v19 = v9 + v7 - 1;
  do
  {
    v11 = *v5;
    if ( *v5 >= v10 )
    {
      v12 = a2->Cylinders.LowPart - 1;
      SectorsPerTrack = a2->SectorsPerTrack;
      LOBYTE(v13) = a2->TracksPerCylinder - 1;
    }
    else
    {
      v12 = v11 / v2;
      v14 = v11 % v2 % a2->SectorsPerTrack;
      v13 = v11 % v2 / a2->SectorsPerTrack;
      LOBYTE(SectorsPerTrack) = v14 + 1;
    }
    v16 = *v3;
    ++v5;
    ++v3;
    *v16 = v13;
    v16[1] = (v12 >> 2) ^ (SectorsPerTrack ^ (v12 >> 2)) & 0x3F;
    v16[2] = v12;
    --v8;
  }
  while ( v8 );
}
