/*
 * XREFs of ?GetLocation@VirtualProcessor@details@Concurrency@@QEBAAEBVlocation@3@XZ @ 0x1800F5548
 * Callers:
 *     sub_1800C5EE0 @ 0x1800C5EE0 (sub_1800C5EE0.c)
 * Callees:
 *     <none>
 */

const struct Concurrency::location *__fastcall Concurrency::details::VirtualProcessor::GetLocation(
        Concurrency::details::VirtualProcessor *this)
{
  return (Concurrency::details::VirtualProcessor *)((char *)this + 216);
}
